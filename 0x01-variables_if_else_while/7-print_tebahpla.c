#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - entry point
 * Description: Print lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */

int main(void)
{

int ch;

for (ch = 'z'; ch >= 'a'; ch--)
{
	putchar(ch);
}
putchar('\n');

return (0);

}
