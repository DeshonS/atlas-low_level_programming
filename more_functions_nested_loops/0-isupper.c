#include "main.h"

/**
 * _isupper - opening of file
 * @c - char being checked for uppercase
 * Return - 1 if uppercase, 0 if lower case
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return 1;
	}
	else
	{
	return 0;
	}
}
