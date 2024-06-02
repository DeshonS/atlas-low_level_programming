#include <stdio.h>

/**
 * cap_string - opening of file
 * @x: string to be converted
 * Return: Always 0 (Success)
*/

char *cap_string(char *x)
{
int i;

while (x[i] != '\0')
{
if (x[i] == ' ' + 1)
{
x[i] = x[i] - 32;
}
}
return (x);
}