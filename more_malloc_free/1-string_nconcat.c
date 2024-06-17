#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - opening of file
 * @s1: first part of the string located in allocated memory
 * @s2: second string of which n bytes will be used
 * @n: number of bytes of s2 that will be used
 * Return: Pointer to string consisting of s1 and n bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    int i, x;
    char *a;
    unsigned int j, y;
    if (s1 == NULL)
    {
        s1 = "";
    }
    if (s2 == NULL)
    {
        s2 = "";
    }
    for (i = 0; s1[i] != '\0'; i++)
    {
        ;
    }
    for (j = 0; j < n + 1; j++)
    {
        ;
    }
    a = malloc((i + j + 1) * sizeof(char));
    if (a == NULL)
    {
        return (NULL);
    }
    for (x = 0; s1[x] != '\0'; x++)
    {
        a[x] = s1[x];
    }
    for (y = 0; y < n; y++)
    {
        a[x] = s2[y];
        x++;
    }
    a[i] = '\0';
    return (a);
}