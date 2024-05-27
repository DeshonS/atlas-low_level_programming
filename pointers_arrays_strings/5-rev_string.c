#include "main.h"

/**
 * rev_string - opening of file
 * @s: string to be reversed
 * Return: Always 0 (Success)
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char revstr;

	while (s[i] != '\0')
	{
		i++;
	}	
	i--;
	while (j < i)
	{
		revstr = s[j];
		s[j] = s[i];
		s[i] = revstr;
		j++;
		i--;
	}
}
