#include <stdio.h>
#include "main.h"

/**
 * print_binary - opening of file
 * @n: int to convert ot binary
 * Return: Binary value of n
 */

void print_binary(unsigned long int n)
{
unsigned int i = n;

if (i > 1)
{
print_binary(i >> 1);
}
putchar((i & 1) + '0');
}
