#include <stdio.h>

/**
 * _sqrt_recursion - opening of file
 * sqrt_o: function to check conditions of n and y and return result
 * @n: value that the code will return the square root of
 * @y: value that math result of x is compared to for return purposes
 * Return: Always 0 (Success)
*/

int sqrt_o(int n, int y)
{
if (n * n == y)
{
return (n);
}
if (n * n > y)
{
return (-1);
}
return (sqrt_o(n + 1, y));
}
int _sqrt_recursion(int n)
{
return (sqrt_o(1, n));
}
