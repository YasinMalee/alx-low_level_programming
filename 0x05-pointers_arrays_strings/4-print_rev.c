#include "main.h"

/**
* print_rev -> printing a string in reverse
* @s: the string to be printed in reverse
*/

void print_rev(char *s)
{
	char t;
	int i, ln, l;

	ln = 0;
	l = 0;
	while (s[ln] != '\0')
		ln++;
	l = ln - 1;
	for (i = 0;i < ln; i++)
	{
		t = s[i];
		s[i] = s[l];
		s[l] = t;
		l -= 1;
	}
}
