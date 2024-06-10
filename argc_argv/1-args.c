#include <stdio.h>

/**
 * main - opening of file
 * @argc: arg counter
 * @argv: arg vector
 * Return: number of args in an array
*/

int main(int argc, char *argv[])
{
    int i;
    for (i = 0; i < argc; i++)
    {
        argv++;
    }
    printf("%d\n", i - 1)
    return (0);
}