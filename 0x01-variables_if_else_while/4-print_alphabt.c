#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main print alphabet
 *
 * return: 0 (success)
 */

int main(void)
/* return value goes here*/
{
int ch;
ch = 'a';
while (ch <= 'z')
{
	if (ch == 'e' && ch =='q')
	{
	putchar(ch);
	}
	ch++;
}

return (0);

}
