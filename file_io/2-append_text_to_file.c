#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
int i = 0;
int fd, out;

if (filename == NULL)
{
return (-1);
}
fd = fopen(filename, "a");
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
while (text_content[i] != '\0')
{
i++;
}
}
out = write(fd, text_content, i);
if (out == -1 || out != i)
{
return (-1);
}
fclose(fd);
return (1);
}