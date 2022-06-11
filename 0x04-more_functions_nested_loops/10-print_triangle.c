#include "main.h"

/**
 * print_triangle -> prints line
 * @size: integer parameter
 */

void print_triangle(int size)
{

	if (size <= 0)
		_putchar('\n');
	else
	{
		int ch, y;

		for (ch = 1; ch <= size; ch++)
		{
			for (y = ch; y < size; y++)
			{
				_putchar(' ');
			}
			for (y = 1; y <= ch; y++)
			{

				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
