#include "main.h"
#include <string.h>

/**
* _memset -> this memory set function
* @s: string
* @b: a charcter
* @n: an integer
* Return: a string                                         */
char *_memset(char *s, char b, unsigned int n)             {
        unsigned int r;

        for (r = 0; r < n; r++)
                s[r] = b;                                  
        return (s);
}
