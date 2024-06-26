#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - opening of file
 * @array: int array
 * @size: size of array
 * @cmp: pointer to function
 * Return: Always 0 (Success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || size <= 0 || cmp == NULL)
{
return (-1);
}
for (i = 0; i < size; i++)
{
if ((*cmp)(array[i]) != 0)
{
return (i);
}
}
return (-1);
}
