#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: the string to search
 * @needle: the string to find
 * Return: char value
 */

char *_strstr(char *haystack, char *needle)
{
	int s = 0, m = 0;

	while (haystack[s])
	{
		while (needle[m])
		{
			if (haystack[s + m] != needle[m])
			{
				break;
			}

			m++;
		}

		if (needle[m] == '\0')
		{
			return (haystack + s);
		}
		s++;
	}
	return (0);
}
