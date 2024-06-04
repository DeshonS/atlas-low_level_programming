#include <stdio.h>

/**
 * print_chessboard - opening of file / prints chessboard
 * @a: array storing the chess pieces
 * Return: Always 0 (Success)
*/

void print_chessboard(char (*a)[8])
{
int x, y;
for (x = 0; x < 8; x++)
{
for (y = 0; y < 8; y++)
{
printf("%c", a[x][y]);
}
printf("\n");
}
}
