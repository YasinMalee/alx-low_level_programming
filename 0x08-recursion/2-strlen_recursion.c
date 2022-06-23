#include "main.h"

/**
 * _strlen_recursion - length of string
 * @s: string parameter
 * Return: Length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
