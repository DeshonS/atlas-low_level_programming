#include <stdio.h>

/**
 * _memset - opening of file
 * @s: string to be converted
 * @b: char to replace memory with
 * @n: number of charachters to replace
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return s;
}