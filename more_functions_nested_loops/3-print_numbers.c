#include "main.h"

/**
 * print_numbers - opening of file
 * Description: prints numbers from 0 to 9 followed by a new line
 * Return: always 0 (Success)
 */

void print_numbers(void)
{
	int c = '0';

	while (c < 10)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
