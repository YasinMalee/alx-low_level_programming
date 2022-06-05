#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main -  program that prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 (success)
 */

int n;

int main(void)
{
	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
}
