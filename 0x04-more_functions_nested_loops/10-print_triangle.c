#include "main.h"

/**
 * print_triangle -> prints line
 * @size: integer parameter
 */

void print_triangle(int size)
{
	int ch, y;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (ch = 1; ch <= size; ch++)
		{
			for (y = 1; y < size; y++)
			{
				_putchar('');
			}
			for (y = 1; y <= ch; y++)
			{

				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
