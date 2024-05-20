#include "main.h"

/**
 * _islower - Opening of file
 * Description - 'checks to see if a charachter is lowercase'
 * Parameter - 'int c is a letter input'
 * Return - If lowercase (0), if uppercase (1)
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
