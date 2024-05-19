#include <stdio.h>

/**
 * main - Entry point
 * Description: 'prints all single digit numbers separated by commas'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 0; x <= 10; x++)
	{
		if (x != 9)
		{
		putchar('0' + x);
		putchar(',');
		putchar(' ');
		}
		else if (x == 10)
		{
		continue;
		}
	}
	putchar('\n');
	return (0);
}
