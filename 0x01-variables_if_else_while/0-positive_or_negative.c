#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;

/* your code goes there */

if (n > 0)
{
printf("%d is positive\n", n); /*display results if n is greater than 1*/
}

else if (n == 0)
{
printf("%d is zero \n", n);   /*display results if n is equal to zero*/
}
else if (n < 0)
{
printf("%d is negative\n", n); /*display results if n is less than 0*/
}
return (0);
}
