#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - opening of file
 * @s: string to be printed in reverse
 * Return: Always 0 (Success)
*/

void _print_rev_recursions(char *s)
{
    if (*s == '\0')
    {
        return;
    }
    printf("%c", *s)
    _print_rev_recursions(s--);
}