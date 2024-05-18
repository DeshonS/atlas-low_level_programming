#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Print the alphabet in lower and uppercase'
 * Return: Always 0 (Success)
 */

int main(void)
{
	char x;
	char y;

	for (x = 'a'; x <= 'z'; x++)
	putchar(x);

	for (y = 'A'; y <= 'Z'; y++)
	putchar(y);

	putchar('\n');

	return (0);
}
