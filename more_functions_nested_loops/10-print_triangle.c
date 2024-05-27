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
		for (x = size; x > 0; x--)
		{
			for (y = size; y < size - x; y++)
			{
				_putchar(' ');
			}
			for (y = size; y < x; y++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
