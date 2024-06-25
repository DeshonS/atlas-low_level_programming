#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - opening of file
 * @seperator: divider between numbers
 * @n: number of args
 * Return: string of numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned int i;

    va_list args;
    va_start(args, n);

    for (i = 0; i < n; i++)
    {
        if (separator == NULL)
        {
            ;
        }
        printf("%d", va_arg(args, int));
        if (i != n - 1)
        {
        printf("%s", separator);
        }
    }
    printf("\n");
    va_end(args);
}
