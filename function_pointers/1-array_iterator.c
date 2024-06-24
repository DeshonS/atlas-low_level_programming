#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - opening of file
 * @array: array of numbers
 * @size: size of the array
 * @action: pointer to function
 * Return: Always 0 (Success)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
for (size_t i = 0; i < size; i++)
{
action(array[i]);
}
}
