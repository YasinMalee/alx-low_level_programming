#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- print alphabet
 *
 * return: 0 (success)
 */

int main(void)
/* main- Print alphabet*/
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
