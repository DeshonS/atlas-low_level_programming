#include <stdio.h>

/**
 * main - Entry point
 * Description: 'print all digits of base 16 in lowercase letters'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
	putchar(x);
	}
	for (y = 10; y <= 16; y++)
	{
	putchar('0' + y);
	}
	putchar('\n');
	return (0);
}
