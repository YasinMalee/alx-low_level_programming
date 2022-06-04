#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/** 
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ln;	
ln = n % 10;
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (ln > 5)
printf("last digit of %d is %d and is greater than 5\n", n, ln);
if (ln == 0)
printf("last digit of %d is %d and is 0\n", n, ln);
if (ln < 6 && ln !=0)
printf("last digit of %d is %d and is less than 6 not 0\n", n, ln);
return (0);
}
