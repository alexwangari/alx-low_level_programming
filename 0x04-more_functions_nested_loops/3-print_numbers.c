#include "main.h"

/*
 * main - prints 0 to 9 using custom putchar fuction,you have to use ASCII to reference
 * Return: void
 *
 */

void print_numbers(void)
{
	int x;

	for ( x = 48 ; x < 58 ; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
