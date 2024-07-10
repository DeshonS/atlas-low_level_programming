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
int i = 0;
int fd, out;

if (filename == NULL)
{
    return (-1);
}
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC , 0600);
if (fd == -1)
{
    return (-1);
}
if (text_content == NULL)
{
    close(fd);
    return (1);
}
else
{
    while(text_content[i] != '\0')
    {
        i++;
    }
}
out = write(fd, text_content, i);
if (out == -1 || out != i)
{
    return (-1);
}
close(fd);
return (1);
}
