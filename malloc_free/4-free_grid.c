#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - opening of file
 * @grid: grid size
 * @height: height of grid
 * Return: Always 0 (Success)
 */

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
