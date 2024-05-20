#include "main.h"

/**
 * _islower - Opening of file
 * Description - 'checks to see if a charachter is lowercase'
 * Return - Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a') && (c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
