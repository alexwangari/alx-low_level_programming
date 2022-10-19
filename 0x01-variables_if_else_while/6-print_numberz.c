#include<stdio.h>
/**
 * main - prints all single digit numbers of base 10 from 0
 * Return: 0 when all is successful
*/
int main(void)
{
int x;
for (x = 0 ; x <= 9 ; x++)
{
putchar(x + '0');
}
putchar('\n');

return (0);
}
