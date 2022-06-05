#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: print the alphabet in lowercase except q and e
 * Return: Always 0 (success)
 */

int main(void)
{

int ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
	if (ch != 'e' && ch != 'q')
	putchar(ch);
}
	putchar('\n');

return (0);

}
