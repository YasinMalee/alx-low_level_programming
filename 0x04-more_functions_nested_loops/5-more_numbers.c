#include "main.h"

/**
* more_numbers -> printing more numbers
*/
void more_numbers(void)
{
	int ch, n;

	for (ch = 0; ch < 10; ch++)
	{
		for (n = 0; n < 15; n++)
		{
			if (n >= 10)
				_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
