#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - opening of file
 * @s: charachter to look for to determine function
 * Return: Always 0 (Success)
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"%", op_mod},
{"/", op_div},
{NULL, NULL}
};
int i;
for (i = 0; ops[i].op != NULL; i++)
{
if(ops[i].op[0] == s[0] && s[1] == '\0')
{
return ops[i].f;
}  
}
return (NULL);
}
