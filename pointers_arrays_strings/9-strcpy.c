#include "main.h"

/**
 * *_strcpy - opening of file
 * @dest: location to copy source to
 * @src: location to copy source from
 * Return: Always 0 (Success)
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return dest;
}
