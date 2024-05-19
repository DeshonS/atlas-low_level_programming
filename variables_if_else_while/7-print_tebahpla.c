#include <stdio.h>

#include <stdio.h>

/**
 * main - Entry point
 * Description: 'print the alphabet backwards'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
	{
	putchar(x);
	}
	putchar('\n');
	return (0);
}
