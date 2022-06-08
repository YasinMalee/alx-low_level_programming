#include "main.h"

/**
 * print_last_digit -> print the last digit
 *@n: passed arguments
 * Return: last digit
 */

int print_last_digit(int n)
{
	int i;

	if (n < 0)
		n = -n;
	i = n % 10;
	if (i < 0)
		i = -a;

	_putchar(i + '0');

	return (i);
}
