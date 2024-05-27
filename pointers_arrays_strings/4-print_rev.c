#include "main.h"

/**
 * print_rev - opening of file
 * @s: string to print in reverse
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int i = 0;
	int x = i - 1;
	while (s[i] != '\0')
	{
		i++;
	}
	while (x >= 0)
	{
		_putchar(s[x]);
		x--;
	}
	_putchar('\n');
}

