#include <stdio.h>

/**
 * _strchr - opening of file
 * @s: string to search for c
 * @c: charachter to search for in s
 * Return: Always 0 (Success)
*/

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
{
return (s);
}
return (NULL);
}