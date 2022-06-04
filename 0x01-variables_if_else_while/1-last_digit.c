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
int ls;

srand(time(0));
n = rand() - RAND_MAX / 2;
ls = n % 10;

if (ls > 5)
{
printf("last digit of %d and %d is greater than 5\n", n, ls);
}
if (ls == 0)
{
printf("last digit of %d and %d  is 0\n", n, ls);
}
if(ls < 6 && ls != 0)
{
printf("last digit is %d and %d is less than 6 and not 0\n", n, ls);
}

return (0);

}
