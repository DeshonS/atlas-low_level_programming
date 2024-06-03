#include <stdio.h>

/**
 * _strspn - opening of file
 * @s: string to be analyzed for accept
 * @accept: charachters to search string s for
 * Return: Always 0 (Success)
*/

unsigned int _strspn(char *s, char *accept)
{
char *x;
unsigned int i = 0;

while (*s != '\0')
{
for (x = accept; *x; x++)
{
if (*s == *x)
{
i++;
break;
}
if (*x == '\0')
{
break;
}
}
s++;
}
return (i);
}