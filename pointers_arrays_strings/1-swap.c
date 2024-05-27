#include "main.h"

/**
 * swap_int - opening of file
 * @a: integer to be swapped with b
 * @b: pointer to be swapped with a
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
