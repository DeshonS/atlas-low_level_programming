#include <stdio.h>

/**
 * _strlen_recursion - opening of file
 * @s: String to calculate the length of
 * Return: Always 0 (Success)
*/

int _strlen_recursion(char *s)
{
    if (*s != '\0')
    {
        _strlen_recursion(s + 1);
    }
    return (s);
}