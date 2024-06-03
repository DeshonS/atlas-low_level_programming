#include <stdio.h>

/**
 * _strchr - opening of file
 * @s: string to search for c
 * @c: charachter to search for in s
 * Return: Always 0 (Success)
*/

char *_strchr(char *s, char c)
{
int i;
int j;

while (s[i] != '\0')
{
if (s[i] == c)
{
j = s[i];
continue;
}
else
{
return (NULL);
}
}
return (j);
}
