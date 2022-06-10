#include "main.h"

/**
* print_square -> prints line
* @size: integer parameter
*/

void print_square(int size)
{
	int ch, y;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (ch = 0; ch < size; ch++)
		{
			for (y = 0; y < size; y++)
			{
			_putchar(35);
			}
			_putchar('\n');
		}
	}
}
