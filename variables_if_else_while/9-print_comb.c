#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints all single digit numbers separated by commas'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (x > 0)
		{
		putchar(', ');
		putchar('0' + x);
		}
		else
		{
		putchar('0' + x);
		}
	}
	putchar('\n');
	return (0);
}
