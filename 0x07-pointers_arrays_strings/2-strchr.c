#include "main.h"

/**
 * _strchr -> string character
 * @s: string given
 * @c: second char
 * Return: a string
 */

char *_strchr(char *s, char c)
{
	int z;

	while (1)
	{
		z = *s++;
		if (z == c)
		{
			return (s - 1);
		}
		if (z == 0)
		{
			return (NULL);
		}
	}
}
