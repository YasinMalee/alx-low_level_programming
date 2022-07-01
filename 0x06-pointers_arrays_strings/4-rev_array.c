#include "main.h"

/**
* reverse_array -> reversing an array
* @a: array a
* @n: an element of an array
*/
void reverse_array(int *a, int n)
{
	int *y, i, rev, ch;

	y = a;
	for (i = 0; i < n; i++)
		y++;
	for (ch = 0; ch < i / 2; ch++)
	{
		rev = a[ch];
		a[ch] = *y;
		*y = rev;
		y--;
	}
}
