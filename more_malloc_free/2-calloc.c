#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - opening of file
 * @nmemb: number of elements in an array
 * @size: number of bytes
 * Return: Pointer to allocated memory, or NULL if error
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
    int *a;
    unsigned int i, tsize;

    if (nmemb <= 0 || size <= 0)
    {
        return (NULL);
    }

    a = malloc(nmemb * size);
    if (a == NULL)
    {
        return (NULL);
    }
    for (i = 0; i < nmemb; i++)
    {
        a[i] = 0;
    }
    return (a);
}