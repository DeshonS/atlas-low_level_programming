#include "main.h"

/**
 * print_rev - opening of file
 * @s: string to print in reverse
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	int x;

	for (x = i - 1; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}

