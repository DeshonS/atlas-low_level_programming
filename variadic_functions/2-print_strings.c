#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - opening of file
 * @separator: divider between numbers
 * @n: number of args
 * Return: string of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;

va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
if (va_arg(args, char *) == NULL)
{
printf("(nil)");
}
if (separator == NULL || i == n - 1)
{
printf("%s", va_arg(args, char *));
}
else
{
printf("%s%s", va_arg(args, char *), separator);
}
}
printf("\n");
va_end(args);
}
