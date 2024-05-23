#include "main.h"

/**
 * more_numbers - opening of file
 * Description: Prints numbers from 0 to 14
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
	int i = 0;

	while (i < 15)
	{
		int j = 1;
		
		if (i < 10)
		{
			_putchar(i + '0');
			i++;
		}
		else
		{
			_putchar(j + '0');
			_putchar(i + '0');
			i++;
		}
	}
}

