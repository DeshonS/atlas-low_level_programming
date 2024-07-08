#include <stdio.h>
#include "main.h"

/**
 * get_bit - opening of file
 * @n: the input value
 * @index: the index of the bit you want to get
 * Return: value of bit at index, or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
if (index > (sizeof(n) * 8))
{
return (-1);
}
n = n >> index;
if (n & 1)
{
return (1);
}
else
{
return (0);
}
}
