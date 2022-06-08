#include "main.h"

/**
 * times_table -> time table
 */

void times_table(void)
{
	int x, n, k;

	for (x = 0; x < 10; x++)
	{
		for (n = 0; n < 10; n++)
		{
			k = x * n;
				if (n != 0 && k < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
				else if (k >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
		}
		_putchar('\n');
	}
