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
	for(x = 'a'; x <= 'z'; x++)
	{
	putchar("%s\n", x);
	}
	return 0;
}
