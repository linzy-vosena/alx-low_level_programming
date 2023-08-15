#include "main.h"

/**
 * jack_bauer - prints every minute of Jack Bauer
 *
 * starting from 00:00 to 23:59
 *
 */

void jack_bauer(void)
{
	int f, g;

	f = 0;

	while (f < 24)
	{
		g = 0;

		while (g < 60)
		{
			_putchar((f / 10) + '0');
			_putchar((f % 10) + '0');
			_putchar(':');
			_putchar((g / 10) + '0');
			_putchar((g % 10) + '0');
			_putchar('\n');
			g++;

		}
		f++;
	}

}
