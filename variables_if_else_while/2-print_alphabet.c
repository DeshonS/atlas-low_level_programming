#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: 'Prints the alphabet'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	for(x = 'A'; x <= 'Z'; x++)
	{
	putchar(tolower(x));
	}
	return 0;
}
