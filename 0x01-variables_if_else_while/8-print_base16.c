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
	int h;
	
	for (ch = 0; ch <= 10; ch ++)
	{
		putchar((num % 10) + '0');
	}
	for (h = 'a'; h <='g'; h++)
	{
		putchar(h);
		putchar('\n');
	}
	return (0);
}
