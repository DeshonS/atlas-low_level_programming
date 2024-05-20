#include "main.h"

/**
 * times_table - opening of file
 * Description - displays times tables
 * Return - Always 0 (Success)
 */

void times_table(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		int y;

		for (y = 0; y <= 9; y++)
		{
			int z;

			z = x * y;
			if (y != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (z <= 9 && y != 0)
			{
				_putchar(' ');
			}
			if (z > 9)
			{
				_putchar((z / 10) + '0');
			}
			_putchar((z % 10) + '0');
		}
	_putchar('\n');
	}
}

