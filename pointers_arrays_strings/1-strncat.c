#include <stdio.h>

/**
 * _strncat - this program splices two strings together
 * @dest: First half of the string being spliced, also the final product
 * @src: Second half of the string being spliced
 * @n: number of charachters to be spliced from each string
 * Return: Always 0 (Success)
*/

char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;

while (*ptr != '\0')
{
ptr++;
}
while (n > 0 && *src != '\0')
{
*ptr = *src;
ptr++;
src++;
n--;
}
return (dest);
}
