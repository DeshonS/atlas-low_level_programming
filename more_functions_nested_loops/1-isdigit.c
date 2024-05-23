#include "main.h"

/**
 * _isdigit - opening of file
 * @c: int to be checked for digit status
 * Return: 1 if digit, 0 if not a digit
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
