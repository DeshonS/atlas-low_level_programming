#include <stdio.h>
#include "main.h"

/**
 * clear_bit - opening of file
 * @n: data
 * @index: index to change
 * Return: 1 for success, -1 for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > (sizeof(*n) * 8))
{
return (-1);
}
*n &= ~(1 << index);
return (1);
}
