#include "search_algos.h"

/**
 * print_array - opening of file
 * @array: pointer to the array
 * @low: low point of the array
 * @high: high point of the array
 * Return: None (void)
 */

void print_array(int *array, size_t low, size_t high)
{
size_t i;
printf("Searching in array: ");
for (i = low; i <= high; i++)
{
printf("%d", array[i]);
if (i < high)
{
printf(", ");
}
}
printf("\n");
}

/**
 * binary_search - opening of file
 * @array: pointer to the array
 * @size: size of the array
 * @value: value to search for
 * Return: index of value, or -1 for errors
 */

int binary_search(int *array, size_t size, int value)
{
size_t low, high, mid;
low = 0;
high = size - 1;
if (array == NULL)
{
return (-1);
}
while (low <= high)
{
mid = low  + (high - low) / 2;
if(array[mid] == value)
{
return (mid);
}
if (array[mid] < value)
{
low = mid + 1;
}
else
{
high = mid + 1;
}
}
return (-1);
}
