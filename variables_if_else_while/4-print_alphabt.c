#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Prints the alphabet minus q and e'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'q' or x == 'e')
		continue;
		else
		putchar(x);
	}
	putchar('\n');
	return (0);
}
