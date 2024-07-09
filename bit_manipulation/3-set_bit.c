#include <stdio.h>
#include "main.h"

/**
 * set_bit - opening of file
 * @n: data to be manipulated
 * @index: the index of the bit to be changed/set
 * Return: 1 for success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= (sizeof(n) * 8))
{
return (-1);
}
*n |= 1 << index;
return (1);
}
