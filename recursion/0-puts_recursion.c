#include <stdio.h>

/**
 * _puts_recursion - opening of file
 * @s: String to be printed
 * Return: Always 0 (Success)
*/

void _puts_recursion(char *s)
{
    int i;
    char *p = s;
    if (p[i] != '\0')
    {
        putchar(p[i]);
        _puts_recursion(p[i + 1]);
    }
    else
    {
        return (0);
    }
}