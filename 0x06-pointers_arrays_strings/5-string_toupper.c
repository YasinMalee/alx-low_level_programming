#include "main.h"

/**
* string_toupper -> converting any string to upper case
* @x: string param
* Return: string
*/
char *string_toupper(char *x)
{
	int y = 0;

	while (x[y])
	{
		if (x[y] >= 97 && x[y] <= 122)
			x[y] = x[y] - 32;
		y++;
	}
	return (x);
}
