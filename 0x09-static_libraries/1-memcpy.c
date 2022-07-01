#include "main.h"
/**
 * _memcpy - Copies memory area
 * @dest: destination memory
 * @n: the number of bytes going to copy                    * @src: the source of memory
 * Return: string copied from src                           */

char *_memcpy(char *dest, char *src, unsigned int n)
{
        unsigned int y;                                    
        for (y = 0; y < n; y++)
                dest[y] = src[y];
                                                                   return (dest);
}
