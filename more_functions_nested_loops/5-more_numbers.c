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
		while (j < 15)
		{
			if (j > 9)
			{
			_putchar(i + '0');
			i++;
			}
			else
			{
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			i++;
			j++;
		}
	}
}

