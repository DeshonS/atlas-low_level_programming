#include <stdio.h>
#include "main.h"

/**
 * flip_bits
 * @n: starting number
* @m: ending number
* Return: number of bits needed to go from one number to another
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int x;
unsigned int i = 0;

x = n ^ m;

while (x != 0)
{
if ((x & 1) == 1)
{
i++;
}
x = x >> 1;
}
return (i);
}
