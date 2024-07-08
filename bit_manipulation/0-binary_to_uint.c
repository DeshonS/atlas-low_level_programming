#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - opening of file
 * @b: binary code to convert to int
 * Return: Int conversion of binary code
 */

unsigned int binary_to_uint(const char *b)
{
int i;
unsigned int newint = 0;
if (b == NULL)
{
return (0);
}
for (i = 0; b[i] != '\0'; i++)
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}
newint <<= 1;
if (b[i] == '1')
{
newint = newint + 1;
}
}
return (newint);
}
