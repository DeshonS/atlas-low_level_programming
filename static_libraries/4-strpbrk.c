#include <stdio.h>

/**
 * _strpbrk - opening of file
 * @s: string to be analyzed
 * @accept: charchters to search s for
 * Return: Pointer to charachters in accept
*/

char *_strpbrk(char *s, char *accept)
{
char *x;

while (*s)
{
for (x = accept; *x; x++)
{
if (*s == *x)
{
return (s);
}
}
s++;
}
return (NULL);
}
