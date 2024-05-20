#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints from an integer to 98
 * @n - print from this number
 * Return: always 0 (Success)
 */

void print_to_98(int n)
{
	int x;

	for (x = n; x != 98;)
	{
	printf("%i, ", x);
	if (x < 98)
		x++;
	else
		x--;
	}
	printf("98\n");
}
