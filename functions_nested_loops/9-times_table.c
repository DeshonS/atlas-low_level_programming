#include "main.h"

/**
 * times_table - opening of file
 * Description - displays times tables
 * Return - Always 0 (Success)
 */

void times_table(void)
{
	int x;
	int y;
	x = 0;

	while (x < 10)
	{
		y = 0;

		while (y < 10)
		{
		int z;	
		z = (x * y);

		_putchar(z);
		_putchar(',');
		_putchar(' ');
		y++;
		}
	_putchar('\n');
	x++;
	}
}
