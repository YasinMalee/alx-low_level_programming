#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - store rondom number
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 5)
printf("last digit of %d and %d is greater than 5\n", n)
else if (n == 0)
printf("last digit of %d and %d  is 0\n", n);
else
printf("last digit is %d and %d is less than 6 and not zero\n", n);

return (0);
return (0);
}
