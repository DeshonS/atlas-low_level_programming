#include "main.h"

/**
 * _islower - Opening of file
 * Description - 'checks to see if a charachter is lowercase'
 * @c - 'int c is a letter input that is checked'
 * Return - If c is lowercase return 1, if c is uppercase return 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
