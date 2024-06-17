#include <stdio.h>
#include <stdlib.h>

/**
 * *malloc_checked - opening of file
 * @b: int to be allocated
 * Return: 98 for error, otherwise pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *x = malloc(b);

if (x == NULL)
{
exit(98);
}
return (x);
}
