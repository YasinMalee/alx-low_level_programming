#include "main.h"

/**
 * print_diagonal - function that draw diagonal line
 * @n: integer parameter
 */

void print_diagonal(int n)
{
	int h, y;

	if (n <= 0)
	{
		_putchar('\n');
		else
		{
			for (h = 0; h < n; h++)
			{
			for (y = 0; y < h; y++)
				_putchar('');
			_putchar(92);
			_putchar('\n');
			}
		}
	}
}
