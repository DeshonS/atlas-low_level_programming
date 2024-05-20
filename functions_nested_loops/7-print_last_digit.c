#include "main.h"

/**
 * _print_last_digit - opening of file
 * @r: the int to check
 * Return: the last digit of r
 */

int print_last_digit(int r)
{
	int t;

	if (r < 0)
	{
		r = -r;
	}
	t = (r % 10);
	if (t < 0)
	{
		t = -t;
	}
	_putchar(t + '0');
	return (t);
}
