#include "main.h"

/**
 * jack_bauer - opening of file
 */

void jack_bauer(void)
{
	int hr;
	int mn;

	hr = 0;

	while (hr < 24)
	{
		mn = 0;
		while (hr < 60)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((mn / 10) + '0');
			_putchar((mn % 10) + '0');
			_putchar('\n');
			mn++;
		}
	hr++;
	}
}
