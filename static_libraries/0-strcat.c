#include <stdio.h>

/**
 * _strcat - function that splices two strings together
 * @dest: the first half of the string being spliced, also the final value
 * @src: the second half of the string being spliced
 * Return: Always 0 (Success)
*/

char *_strcat(char *dest, char *src)
{
char *ptr = dest;

while (*ptr != '\0')
{
ptr++;
}
while (*src != '\0')
{
*ptr = *src;

ptr++;
src++;
}
*ptr = '\0';

return (dest);
}
