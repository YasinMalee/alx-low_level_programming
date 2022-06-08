#include "main.h"
/**
 * jack_bauer -> prints 24 hours
 */

void jack_bauer(void)
{
	int time, j;

	for (time = 0; time < 24; time++)
	{
		for (j = 0; j < 60; j++)
		{
			if (time < 10)
			{
				_putchar('0');
				_putchar(time + '0');
			}
			else if (time >= 10)
			{
				_putchar((time / 10) + '0');
				_putchar((time % 10) + '0');
			}
			if (j < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(j + '0');
			}
			else if (j >= 10)
			{
				_putchar(':');
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
