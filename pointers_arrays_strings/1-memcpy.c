#include <stdio.h>

/**
 * _memcpy - opening of file
 * @dest: destination of copied memory
 * @src: memory to be copied
 * @n: number of charachters to be copied
 * Return: Always 0 (Success)
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
