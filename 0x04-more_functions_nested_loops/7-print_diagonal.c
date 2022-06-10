#include "main.h"

/**
* print_diagonal -> prints line
* @n: integer parameter
*/
void print_diagonal(int n)
{
	int ch, y;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (ch = 0; ch < n; ch++)
		{
			for (y = 0; y < ch; y++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
