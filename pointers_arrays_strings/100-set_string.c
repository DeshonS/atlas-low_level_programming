#include <stdio.h>

/**
 * set_string - opening of file
 * @s: pointer to be changed to char
 * @to: char that will be set by the variable
*/

void set_string(char **s, char *to)
{
    char val;
    **s = *to;
    *to = val;
}