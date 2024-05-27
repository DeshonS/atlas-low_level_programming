#include "main.h"
#include <stdio.h>

/**
 * _puts - opening of file
 * @str: string to be printed
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
