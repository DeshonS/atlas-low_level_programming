#include "search_algos.h"

/**
 * linear_search - opening of file
 * @array: pointer to array
 * @size: size of the array
 * @value: value for comparison
 * Return: first indexed location of value, or -1 for errors
 */

int linear_search(int *array, size_t size, int value)
{
long unsigned int i;
if (array == NULL)
{
return (-1);
}
for (i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
{
return (i);
}
}
return (-1);
}
