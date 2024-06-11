#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - opening of file
 * @argc: arg counter
 * @argv: array containing numbers to add
 * Return: 1 if error, 0 if success
 */

int main(int argc, char *argv[])

{
int x, y, add = 0;

for (x = 1; x < argc; x++)

{
for (y = 0; argv[y][y] != '\0'; y++)
{
if (!isdigit(argv[x][y]))
{
printf("Error\n");
return (1);
}
}
add = add + atoi(argv[x]);
}
printf("%d\n", add);
return (0);
}
