#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print wether positive or not
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 0)
printf("last digit of %d and %d is greater than 5\n", n);
else if (n == 0)
printf("last digit of %d and %d  is zero\n", n);
else
printf("last digit is %d and %d is less than 6 and not zero\n", n);

return (0);

}
