#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/* this is your code
 *discription here
 * */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n % 10 > 5)
printf("last digit of %d is %d and is greater than 5\n", n, n % 10);
if (n % 10 == 0)
printf("last digit of %d is %d and is 0\n", n, n % 10);
if (n % 10 < 6 && n % 10 != 0)
printf("last digit of %d is %d and is less than 6 not 0\n", n, n % 10);
return (0);
}

