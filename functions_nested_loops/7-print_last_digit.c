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
	return (t);
}
