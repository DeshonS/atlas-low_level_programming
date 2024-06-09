#include <stdio.h>

/**
 * _sqrt_recursion - opening of file
 * @n: value that the code will return the square root of
 * Return: Always 0 (Success)
*/

int sqrt_o(int n, int y)
{
    if(n * n == y)
    {
        return (n);
    }
    if (n * n > y)
    {
        return (-1);
    }
    return (sqrt_o(n + 1, y));
}

int _sqrt_recursion (int n)
{
    return (sqrt_o(0, n));
}