#include "main.h"

/**
* puts_half -> puts half
* @str: string param
*/
void puts_half(char *str)
{
	int n, ch, d;

	n = strlen(str);
	if (n % 2 == 1)
		ch = n / 2 + 1;
	else
		ch = n / 2;
	for (d = ch; d < n; d++)

		_putchar(str[d]);
	_putchar('\n');
}
