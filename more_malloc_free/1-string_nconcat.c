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
    unsigned int i, j, z;
    char *a;
    int b = 0;
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
    for (j = 0; s2[j] != '\0'; j++)
    {
        ;
    }
    a = malloc((i + j + 1) * sizeof(char));
    if (a == NULL)
    {
        return (NULL);
    }
    for (z = 0; z < (i + j + 1); z++)
    {
    if (z < i)
    {
    a[z] = s1[z];
    }
    else if (z < n)
    {
    a[z] = s2[b++];
    }
}
return (a);
}