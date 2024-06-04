#include <stdio.h>

/**
 * print_diagsums - opening of file
 * @a: pointer to an array
 * @size: the diagonal for which the sum will be the return
 * Return: Sum of the diagonal integers
*/

void print_diagsums(int *a, int size)
{
    int i, x, y;
    
    for (i = 0; i < size; i++)
    {
        x += a[i * size + 1];
        y += a[i * size + (size - 1 - i)];
    }
}