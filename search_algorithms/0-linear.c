#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
    long unsigned int i;
    if (array == NULL)
    {
        return (-1);
    }
    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%d] = [%d]", i, array[i]);
        if (array[i] == value)
        {
            return (i);
        }
    }
    return (-1);
}