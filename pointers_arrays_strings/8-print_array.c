#include <stdio.h>

/**
 * print_array - opening of file
 * @a: variable stored in the array
 * @n: position in the array the variable is stored
 * Return: Always 0 (Success)
 */

void print_array(int *a, int n)
{
	int i;

	for i = 0; i < n; i++
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
