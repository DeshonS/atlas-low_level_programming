#include "main.h"

/**
 * more_numbers - opening of file
 * Description: Prints numbers from 0 to 14
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
	_putchar ('\n');
	}
}
