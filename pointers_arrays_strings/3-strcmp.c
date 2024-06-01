#include <stdio.h>

/**
 * _strcmp - opening of file
 * @s1: first string to be compared
 * @s2: second string to be compared
 * Return: Always 0 (Success)
*/

int _strcmp(char *s1, char *s2)
{
    int i;

    while (s1[i] != '\0' && s1[i] != '\0')
    {
        if (s1[i] == s2[i])
        {
            i++;
        }
    }
    return (i);
}
