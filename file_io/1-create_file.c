#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

/**
 * create_file - opening of file
 * @filename: name of file
 * @text_content: text content
 * Return: Always 0 (Success)
*/

int create_file(const char *filename, char *text_content)
{
int fd = open(filename, O_RDWR | O_CREAT);
int text;
int out;
char *buffer;

if (filename == NULL)
{
return (-1);
}
buffer = malloc(sizeof(text_content));
if (buffer == NULL)
{
return (-1);
}
if (fd == -1)
{
free(buffer);
return (-1);
}
text = read(fd, buffer, text_content);
if (text == -1)
{
free(buffer);
return (-1);
}
out = write(STDOUT_FILENO, buffer, text);
if (out == -1 || out != text)
{
free(buffer);
return (-1);
}
close(fd);
free(buffer);
return (out);
}
