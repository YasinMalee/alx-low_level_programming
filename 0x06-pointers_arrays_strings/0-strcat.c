#include "main.h"

/**
 * _strcat -> this is strcat function
 * @dest: first parameter
 * @src: second parameter
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	int l = 0, ch;

	while (dest[0])
		l++;
	for (ch = 0; src[ch] != 0; ch++)
	{
		dest[l] = src[ch];
		l += 1;
	}
	dest[l] = '\0';
	return (dest);
}
