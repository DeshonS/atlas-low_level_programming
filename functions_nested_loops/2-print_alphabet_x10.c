#include "main.h"

/**
 * print_alphabet_x10 - opening of file
 * Description - Prints the alphabet 10 times
 * Return - Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int x = 'a';
	int t = 0;
	while (t <= 10)
	{
		while (x <= 'z')
		{
		_putchar(x);
		x++;
		}
	t++;
	}
	_putchar('\n');
}
