#include "main.h"

/**
 * swap_int -> give 2 integer swap the variable
 * @a: parameter 1
 * @b: parameyer 2
 */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;

}
