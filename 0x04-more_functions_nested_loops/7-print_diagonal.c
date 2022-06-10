#include "main.h"

/**
 * print_diagonal - function that draw diagonal line
 * @n: integer parameter
 */

void print_diagonal(int n)
{
	int h;

	if (n <= 0)
	{
		putchar('\n');
		else
		{
		for (h = 0; h < n; h++)
			_putchar(92);
		}
	}
	_putchar('\n');
}
