#include "main.h"

/**
 * times_table - opening of file
 * Description - displays times tables
 * Return - Always 0 (Success)
 */

void times_table(void)
{
	for (x = 0; x <= 10; x++)
	{
		for (y = 0; y <= 10; y++);
		{
			int z;
			z = x * y;
			_putchar(z);
			if (y == 9)
				continue;

			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
	}
}

