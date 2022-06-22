#include "main.h"

/**
 * print_chessboard - Print the chessboard
 * @a: array of pieces
 * Return: Nothing.
 */

void print_chessboard(char (*a)[8])
{
	int yas, mo;

	for (yas = 0; yas < 8; yas++)
	{
		for (mo = 0; mo < 8; mo++)
		{
			_putchar(a[yas][mo]);
		}

		_putchar('\n');
	}
}
