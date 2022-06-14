#include "main.h"
#include <string.h>

/**
 * _strlen -> a function yo grt the length of string
 * @s: string pointer to passed to this function
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len;

	for (; *s != '\0'; s++)
	{
		len += 1;
	}
	return (len);
}
