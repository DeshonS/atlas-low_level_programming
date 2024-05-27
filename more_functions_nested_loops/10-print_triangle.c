#include "main.h"

/**
 * print_triangle - opening of file
 * @size: variable that determines size of triangle
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x, y;

		for (x = 1; x <= size; x++)
		{
			for (y = 0; y < size - x; y++)
			{
				_putchar(' ');
			}
			for (y = 0; y < x; y++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
