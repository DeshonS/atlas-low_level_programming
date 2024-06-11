#include <stdio.h>
#include <stdlib.h>

/**
 * main - opening of file
 * @argc: arg counter
 * @argv: array containing numbers to add
 * Return: 0 if successful, 1 if error
*/

int main(int argc, char *argv[])
{
    if (argc == NULL)
    {
        printf("0\n");
    }
    if (argv[1] != 0-9 || argv[2] != 0-9)
    {
        printf("Error\n");
        return (1);
    }
    else
    {
        int a = atoi(argv[1]);
        int b = atoi(argv[2]);
        int res = a + b;
        printf("%d\n", res);
    }
}