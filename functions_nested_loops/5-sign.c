#include "main.h"

/**
 * print_sign - opening of file
 * @n: the int to check
 * Return: 1 if n is more than zero, 0 if n is zero, -1 if n is less than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
