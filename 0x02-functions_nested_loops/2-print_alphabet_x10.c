#invlude "main.h"

/**
 * print_alphabet_x10 -> print the lowercase alphabet
 */
void print_alphabet_x10(void)
{
	int y;
	int n;
	for (n = 0; n < 10; n++)
		{
			for (y = 'a'; y <= 'z'; y++)
				_putchar(y);
		}
	_putchar('\n');
}
