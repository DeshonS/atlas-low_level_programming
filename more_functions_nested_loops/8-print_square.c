#include "main.h"

/**
 * print_square - opening of file
 * @size: variable indicating size of square
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
	if (size < 0)
	{
		_putchar('\n');
	}
	else
	{
		int x, y;

		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
