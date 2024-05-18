#include <stdio.h>

/**
 * main - Opening of file
 * Description - 'prints the alphabet in both cases'
 * Return - Always 0 (Success)
 */

int main(void)
{
	char x;
	char y;

	for (x = 'a'; x <= 'z'; x++)
	printchar(x);

	for (y = 'A'; y <= 'Z'; y++)
	printchar(y);

	printchar('\n');

	return(0);
}
