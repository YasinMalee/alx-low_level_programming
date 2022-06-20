#include "main.h"

/**
 * _strchr -> string character
 * @s: string given
 * @c: second char
 * Return: a string
 */

char *_strchr(char *s, char c)
{
	int d;

	while(1)

	{
		d = *s++;
		if (d == c)
		{
			return (s-1);
		}
	if (d == 0)
		{
			return (NULL);
		}
	}
}
