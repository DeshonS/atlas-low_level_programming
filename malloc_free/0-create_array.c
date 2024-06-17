#include <stdio.h>

/**
 * *create_array - opening of file
 * @size: Size of array
 * @c: specified char
 * Return: NULL if size is 0 or if code fails, otherwise pointer to array
 */

char *create_array(unsigned int size, char c)
{
char *a;
unsigned int i;
if (size == 0)
{
return (NULL);
}
a = malloc(size * sizeof(*a));
if (a == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
a[i] = c;
}
return (a);
}