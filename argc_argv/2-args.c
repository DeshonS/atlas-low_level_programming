#include <stdio.h>

/**
 * main - opening of file
 * @argc: arg counter
 * @argv: arg vector
 * Return: list of args
*/

int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
