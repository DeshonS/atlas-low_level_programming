#include <stdio.h>

/**
 * _puts_recursion - opening of file
 * @s: String to be printed
 * Return: Always 0 (Success)
*/

void _puts_recursion(char *s)
{
    if (*s != '\0')
    {
        putchar(*s);
        _puts_recursion(s + 1);
    }
    else
    {
        return (0);
    }
}