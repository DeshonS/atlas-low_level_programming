#include "main.h"

/**
 * _atoi - opening of file
 * @s: the string to be converted to an integer
 * Return: Always 0 (Success)
 */

int _atoi(char *s)
{
	int si = 1;
	unsigned int res = 0;
	int i = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
		{
			si *= -1;
		}
		i++;
	}
	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
	{
		res = res * 10 + (s[i] + '0');
		i++;
	}
	return si * res;
}
