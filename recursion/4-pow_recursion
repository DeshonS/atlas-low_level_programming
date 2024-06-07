#include <stdio.h>

/**
 * _pow_recursion - opening of file
 * @x: base value to be raised to the power of y
 * @y: the power which x will be influenced by
 * Return: Always 0 (success)
*/

int _pow_recursion(int x, int y)
{
    if (y < 0)
    {
        return (-1);
    }
    else if (y < 1)
    {
        return (1);
    }
    else
    {
        return (x * _pow_recursion(x, y - 1));
    }
}