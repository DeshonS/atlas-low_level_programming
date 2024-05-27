#include "main.h"

/**
 * puts2 - opening of file
 * @str: string being manipulated
 * Return: Always 0 (Success)
 */

void puts2(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
			i++;
		}
		else
		{
			continue;
			i++;
		}
	}
	_putchar('\n');
}
