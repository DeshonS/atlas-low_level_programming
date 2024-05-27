#include "main.h"

/**
 * print_line - opening of file
 * @n: variable that indicates number of lines to be printed
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		int j = 0;
		while (j < n)
		{
			_putchar('_');
			j++;
		}
	_putchar ('\n');
	}
}
