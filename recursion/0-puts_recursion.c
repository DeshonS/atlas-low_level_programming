#include <stdio.h>

/**
 * _puts_recursion - opening of file
 * @s: String to be printed
 * Return: Always 0 (Success)
*/

void _puts_recursion(char *s)
{
    int i;
    if (s[i] != '\0')
    {
        _putchar(s[i]);
        _puts_recursion(s[i + 1]);
    }
    else
    {
        return (0);
    }
}