#include<stdio.h>
/**
 * main - write alphabets in reverse order
 * Return: 0 When all is well it prints
*/
int main(void)
{
int i = 122;

while (i > 96)
{
putchar(i);
i--;
}
putchar(10);

return (0);
}
