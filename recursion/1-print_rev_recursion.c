#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - opening of file
 * @s: string to be printed in reverse
 * Return: Always 0 (Success)
*/

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
