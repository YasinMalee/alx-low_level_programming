#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - Print the sum of two diagonals of square matrix
  *
  * @a: the matrix
  * @size: the size
  *
  * Return: Nothing.
  */
void print_diagsums(int *a, int size)
{
	int w, sm1 = 0, sm2 = 0;

	for (w = 0; w < size; w++)
	{
		sm1 += a[(size + 1) * w];
		sm2 += a[(size - 1) * (w + 1)];
	}

	printf("%d, %d\n", sm1, sm2);
}
