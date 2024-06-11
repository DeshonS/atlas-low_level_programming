#include <stdio.h> 

/**
 * main - opening of file
 * @argc: arg counter
 * @argv: array that stores the numbers to be multiplied
 * Return: Always 0 unless error, then 1
*/

int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
int res = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", res);
}
return (0);
}
