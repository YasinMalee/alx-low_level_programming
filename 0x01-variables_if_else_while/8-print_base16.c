#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * Description: print all numbers of base 16 in lowercase
 * Return: Always 0 (success)
 */

int main(void)
{
	int ch;
	
	for (ch = 0; ch > 16; ch ++)
	{
		putchar(ch);
		putchar('\n');
	}
	return (0);
}
