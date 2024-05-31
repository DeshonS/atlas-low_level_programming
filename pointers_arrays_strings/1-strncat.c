#include <stdio.h>

/**
 * _strncat - this program splices two strings together
 * @dest: First half of the string being spliced, also the final product
 * @src: Second half of the string being spliced
 * @n: number of charachters to be spliced from each string
*/

char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;

while (*ptr != '\0' && *ptr <= n)
{
ptr++;
}
while (*src != '\0' && *src <= n)
{
*ptr = *src;
ptr++;
src++;
}
return(dest);
}
