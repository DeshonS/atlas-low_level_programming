#include <stdio.h>

/**
 * print_name - prints a name
 * @name: name to print
 * @f: pouinter to function
 * Return: Always 0 (success)
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
{
return;
}
(*f)(name);
}

