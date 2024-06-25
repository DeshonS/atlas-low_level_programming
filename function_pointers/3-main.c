#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - opening of file
 * @argc: argument counter
 * argv: arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
    int x;

    x = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
    printf("%d\n", x);
    return (0);
}