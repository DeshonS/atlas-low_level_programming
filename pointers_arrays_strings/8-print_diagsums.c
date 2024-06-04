#include <stdio.h>

/**
 * print_diagsums - opening of file
 * @a: pointer to an array
 * @size: the diagonal for which the sum will be the return
 * Return: Sum of the diagonal integers
*/

void print_diagsums(int *a, int size)
{
    int i;
    int x = 0;
    int y = 0;
    
    for (i = 0; i < size; i++)
    {
        x += a[i * size + i];
        y += a[i * size + (size - 1 - i)];
    }
    printf("%d, %d", x, y);
}