#include <stdio.h>

/**
 * leet - opening of file
 * @spec: string to be modified
 * Return: Always 0 (Success)
*/

char *leet(char *x)
{
int i;
char *new = x;
char spec[128];
spec['a'] = spec['A'] = 4;
spec['e'] = spec['E'] = 3;
spec['o'] = spec['O'] = 0;
spec['t'] = spec['T'] = 7;
spec['l'] = spec['L'] = 1;

while (x[i] != '\0')
{
if (x[i] == spec)
{
x[i] = spec[x[i]];
}
i++;
}
return (x);
}