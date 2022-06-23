#include "main.h"

/**
* cap_string -> capitalization function
* @x: string param
* Return: capitalized version of the string
*/

char *cap_string(char *x)
{
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
	int len = 13;
	int n = 0, m;

	while (x[n])
	{
		m = 0;
		while (m < len)
		{
			if ((n == 0 || x[n - 1] == spc[m]) && (x[n] >= 97 && x[n] <= 122))
				x[n] = x[n] - 32;
			m++;
		}
		n++;
	}
	return (x);
}
