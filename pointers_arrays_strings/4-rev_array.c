#include <stdio.h>

/**
 * reverse_array - opening of file
 * @a: string of integers to be reversed
 * @n: number of integers to reverse
 * Return: Always 0 (Success)
*/

void reverse_array(int *a, int n)
{
    int i, t;

    for (i = 0; i < n / 2; i++)
    {
        t = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = t;
    }
}
