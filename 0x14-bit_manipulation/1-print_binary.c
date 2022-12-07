#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to be converted
 * 
 **/

void print_binary(unsigned long int n)
{
	int x = 0;
	int num = sizeof(n) * 8 - 1;
		
	if (n == 0)
	_putchar('0');
		
	while (num >= 0)
	{
		
	if (n >> num & 1)
	{
	
	_putchar('1');
	x++;
	}

	else if (x)
	_putchar('0');
	num--;

	}
}
