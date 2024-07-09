#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

/**
 * read_textfile - opening of file
 * @filename: pointer to filename
 * @letters: number of letters
 * Return: output of text file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t bytes, bytesw;
char *buffer;

if  (filename == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
return (0);
}
buffer = (char *)malloc(sizeof(char) * (letters + 1));
if (buffer == NULL)
{
close(fd);
return (0);
}
bytes = read(fd, buffer, letters);
if (bytes == -1)
{
free(buffer);
close(fd);
return (0);
}
buffer[bytes] = '\0';
bytesw = write(STDOUT_FILENO, buffer, bytes);
if (bytesw == -1 || bytesw != bytes)
{
free(buffer);
close(fd);
return (0);
}
free(buffer);
close(fd);
return (bytesw);
}
