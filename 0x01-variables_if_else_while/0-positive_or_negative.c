#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * Main - print if the number is positive,negative or 0
 * Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n); /*display results if n is greater than 1*/
}
else if (n == 0)
{
printf("%d is zero\n", n);   /*display results if n is equal to zero*/
}
else

{
printf("%d is negative\n", n); /*display results if n is less than 0*/
}
return (0);
}
