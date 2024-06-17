#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - opening of file
 * @width: the width of the 2d grid
 * @height: the height of the 2d grid
 * Return: pointer to a 2d array of integers, otherwise null
 */

int **alloc_grid(int width, int height)
{
    int **a;
    int x, y;

    if (width <= 0 || height <= 0)
    {
        return (NULL);
    }
    a = malloc(width * sizeof(int));
    if (a == NULL)
    {
        return (NULL);
    }
    for (x = 0; x < height; x++)
    {
        a[x] = malloc(width * sizeof(**a));
        if(a[x] == NULL)
        {
            for (x--; x >= 0; x--)
            free(a[x]);
            free(a);
            return (NULL);
        }
        for (y = 0; y < width; y++)
        {
            a[x][y] = 0;
        }
    }
    return (a);
}