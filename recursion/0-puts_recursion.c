#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - opening of file
 * @s: String to be printed
 * Return: Always 0 (Success)
*/

void _puts_recursion(char *s)
{
    if (*s != '\0')
    {
        _putchar(*s);
        _puts_recursion(s + 1);
    }
}