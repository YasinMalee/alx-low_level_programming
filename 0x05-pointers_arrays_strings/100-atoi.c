#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: pointer to convert
 * Return: integer
 */

int _atoi(char *s)
{
	int k = 0;
	unsigned int ch = 0;
	int min = 1;
	int yas = 0;

	while (s[k])
	{
		if (s[k] == 45)
		{
			min *= -1;
		}

		while (s[k] >= 48 && s[k] <= 57)
		{
			yas = 1;
			ch = (ch * 10) + (s[k] - '0');
			k++;
		}

		if (yas == 1)
		{
			break;
		}
	}
	k++;
}
ch *= min;
return (ch);
}
