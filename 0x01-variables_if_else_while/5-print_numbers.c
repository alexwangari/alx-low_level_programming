#include<stdio.h>
/**
 * main - prints single digit numbers of base 10 between 0 and 10
 * Return: 0 when successful passes 0
*/
int main(void)
{
char x;

for (x = '0' ; x <= '9'; x++)
putchar(x);
putchar('\n');

return (0);
}
