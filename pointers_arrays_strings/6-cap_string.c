#include <stdio.h>

/**
 * cap_string - opening of file
 * @x: string to be converted
 * Return: Always 0 (Success)
*/

char *cap_string(char *x)
{
int i;

for (i = 0; x[i] != '\0'; i++)
{
if (x[i] == 32)
{
x[i] = x[i] - 32;
}
}
return (x);
}