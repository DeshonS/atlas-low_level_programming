#include <stdio.h>

/**
 * cap_string - opening of file
 * @x: string to be converted
 * Return: Always 0 (Success)
*/

char *cap_string(char *x)
{
int i;
int cap = 1;

for (i = 0; x[i] != '\0'; i++)
{
if (x[i] == ' ' || x[i] == 0 || x[i] == ',' || x[i] == ';' || x[i] == '.' || x[i] == '!' || x[i] == '?' || x[i] == '"' || x[i] == '(' || x[i] == ')' || x[i] == '{' || x[i] == '}' || x[i] == '\n')
{
cap = 1;
}
else if (cap && x[i] >= 'a' && x[i] <= 'z')
{
x[i] = x[i] - 32;
cap = 0;
}
else
{
cap = 0;
}
}
return (x);
}
