#include "main.h"

/**
* leet -> a leet function
* @x: param x
* Return: a string
*/
char *leet(char *x)
{
	int n = 0, m, l = 5;
	char tr[5] = {'A', 'E', 'O', 'T', 'L'};
	char trw[5] = {'4', '3', '0', '7', '1'};

	while (x[n])
	{
		m = 0;

		while (m < l)
		{
			if (x[n] == tr[m] || x[n] - 32 == tr[m])
				x[n] = trw[m];
			m++;
		}
		n++;
	}
	return (x);
}
