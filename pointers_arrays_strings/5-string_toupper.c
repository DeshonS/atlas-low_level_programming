#include <stdio.h>

/**
 * string_toupper - opening of file
 * @*: string to be converted
 * Return: Always 0 (Success)
*/

char *string_toupper(char *t)
{
int i;

while (t[i] != '\0')
{
if (t[i] >= 'a' && t[i] <= 'z')
{
t[i] = t[i] - 32;
}
}
}