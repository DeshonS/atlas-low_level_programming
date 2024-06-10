#include <stdio.h>

/**
 * primecheck - opening of file
 * @x: number to check for prime status
 * @y: the dividing number to check x against
 * Return: 1 for Prime, 0 if not
*/

int primecheck(int x, int y)
{
    if (x == y)
    {
        return (1);
    }
    if (x % y == 0)
    {
        return (0);
    }
    return (primecheck(x, y + 1));
}

int is_prime_number(int n)
{
    if (n <= 1)
    {
        return (0);
    }
    return (primecheck(n, 2));
}