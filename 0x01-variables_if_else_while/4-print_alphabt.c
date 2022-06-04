#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- print all the letters except letter q and e
 *
 * return: 0 (success)
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
