#include "main.h"
/**
 * _memcpy - Copies memory area
 * @dest: where to copy the memory to
 * @n: the number of bytes
 * @src: the memory area to copy from
 *
 * Return: a pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int y;

	for (y = 0; y < n; y++)
		dest[y] = src[y];

	return (dest);
}
