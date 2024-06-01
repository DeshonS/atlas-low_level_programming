#include <stdio.h>

/**
 * _strncpy - opening of file
 * @src: string to be copied
 * @dest: string result of copying dest
 * @n: number of charachters in the string
 * Return: Always 0 (Success)
*/

char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);}