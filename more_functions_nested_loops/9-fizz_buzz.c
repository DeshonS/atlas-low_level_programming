#include <stdio.h>
#include "main.h"

/**
 * main - opening of file
 * Description: Prints Fizz Buzz algorithm
 * Return: Always 0 (Success)
 */

int main()
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 3) == 0 && (x % 5) == 0)
		{
			printf("Fizzbuzz");
		}
		else if ((x % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((x % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", x);
		}
		if (x < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
