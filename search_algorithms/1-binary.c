#include "search_algos.h"

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
        print_array(array, size);
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