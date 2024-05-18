#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: 'Prints the alphabet'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x;
	for(x = 'a'; x <= 'z'; x++)
	{
	char putchar("%c\n", x);
	}
	return 0;
}
