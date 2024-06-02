#include <stdio.h>

/**
 * string_toupper - opening of file
 * @t: string to be converted
 * Return: Always 0 (Success)
*/

char *string_toupper(char *t)
{
int i;

for (i = 0; t[i] != '\0'; i++)
{
if (t[i] >= 'a' && t[i] <= 'z')
{
t[i] = t[i] - 32;
}
}
return (t);
}
