#include<stdio.h>
/**
 * main - print alphabet in lower case
 * Return: 0
*/
int main(void)
{
int letter = 97;

while (letter < 123)
{
	putchar(letter);
	letter++;
}
putchar(10);

return (0);
}
