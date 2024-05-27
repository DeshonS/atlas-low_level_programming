#include "main.h"

/**
 * rev_string - opening of file
 * @s: string to be reversed
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	int i = 0;
	while (*s != '\0')
	{
		_putchar(s);
	}

	while (s[i] != '\0')
	{
		i++;
	}
	
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
