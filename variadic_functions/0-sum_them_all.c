#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - opening of file
 * @n: number of params
 * Return: Sum of params
 */

int sum_them_all(const unsigned int n, ...)
{
    va_list args;
    va_start(args, n);

    int i;
    int sum = 0;

    if (n == 0)
    {
        return (0);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + va_arg(args, n);
    }
    va_end(args);
    return (sum);
}