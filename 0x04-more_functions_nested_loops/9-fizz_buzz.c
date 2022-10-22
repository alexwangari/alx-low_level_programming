#include <stdio.h>

/**
 * main -  main function
 * Returns: 0
 */
int main(void)

{
int i = 0;

for (i = 1; i <= 100; i++)
{
if ((i % 3 == 0) && (i % 5 == 0))
printf("FizzBuzz");
else if (i % 3 == 0)
printf("Fizz");
else if (i % 5 == 0)
printf("Buzz");
else
printf("%d", i);

/* not 100 */
if (i < 100)
putchar(' ');
}
putchar('\n');
return (0);
}

