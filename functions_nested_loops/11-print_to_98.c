#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints from an integer to 98
 * @n - variable integer to be printed from
 * Return: always 0 (Success)
 */

void print_to_98(int n)
{
	while (n != 98)
	{
	printf("%d, ", n);
	if (n < 98)
		n++;
	else
		n--;
	}
}
