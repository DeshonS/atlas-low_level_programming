#include "main.h"

/**
 * print_diagonal - opening of file
 * @n: variable that indicates the number of spaces before line
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		int j = n;
		int i = 0;

		while (i < n)
		{
			_putchar(' ');
			i++;
		}
		_putchar('\\');
		_putchar('\n');
		j++;
	}
}
	


