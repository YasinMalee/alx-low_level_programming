#include "main.h"

/**
  * _strpbrk - search a string for any of a set of bytes
  * @s: source string
  * @accept: accepted characters
  *
  * Return: the string since the first found accepted character
  */
char *_strpbrk(char *s, char *accept)
{
	int q = 0, i;

	while (s[q])
	{
		i = 0;

		while (accept[i])
		{
			if (s[q] == accept[i])
			{
				s += q;
				return (s);
			}

			i++;
		}

		q++;
	}

	return ('\0');
}
