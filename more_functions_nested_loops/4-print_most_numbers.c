#include "main.h"

/**
 * print_most_numbers - opening of file
 * Description: print numbers from 0 to 9 except 2 and 4
 * Return: Always 0 (success)
 */

void print_most_numbers(void)
{
	int c = 0;

	while (c < 10)
	{
		if (c == 2 || c == 4)
		{
			continue;
		}
		else
		{
			_putchar(c + '0');
		}
	c++;
	}
}
