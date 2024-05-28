#include "main.h"

/**
 * puts_half - opening of file
 * @str: variable being manipulated
 * Return: Always 0 (Success)
 */

void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if ((i % 2) == 0)
	{
		int j = i / 2;
	}
	else
	{
		int j = (i + 1) / 2;
	}

		while (str[j] != '\0')
		{
			_putchar(str[j]);
			j++;
		}
	}
	_putchar('\n');
}