#include <stdio.h>

/**
 * factorial - opening of file
 * @n: number to calculate factorial
 * Return: Always 0 (Success)
*/

int factorial(int n)
{
    if (n < 0)
    {
        return (-1);
    }
    else if (n < 1)
    {
        return (1);
    }
    else
    {
        return (n * factorial(n - 1));
    }
    return (n);
}