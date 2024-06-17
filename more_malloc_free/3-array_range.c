#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - opening of file
 * @min: minimum value in array
 * @max: maximum value of array
 * Return: array of integers, or NULL if failure
 */

int *array_range(int min, int max)
{
    int *a;
    int i = 0;

    if (min > max)
    {
        return (NULL);
    }
    a = malloc(sizeof(int) * (max - min + 1));
    if (a == NULL)
    {
        return (NULL);
    }
    while (min <= max)
    {
        a[i] = min;
        min++;
        i++;
    }
    return (a);
}