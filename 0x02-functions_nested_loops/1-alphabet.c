#include "main.h"

/**
 * main - print alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
	_putchar(n);
	}

	_putchar('\n');
	return (0);
}
