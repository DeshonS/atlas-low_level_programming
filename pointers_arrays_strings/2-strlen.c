#include "main.h"

/**
 * _strlen - opening of file
 * @s - string to be analyzed for charachter count
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		x++;
		s++;
	}

	return (x);
}
