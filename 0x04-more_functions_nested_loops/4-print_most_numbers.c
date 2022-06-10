#include "main.h"

/**
 * print_most_numbers - function that print most numbers
 */

void print_most_numbers(void)
{
	int ch;

	for (ch = 0; ch < 10; ch++)
	{
		if (ch != 2 && ch != 4)
			_putchar(ch + '0');
	}
	_putchar('\n');
}
