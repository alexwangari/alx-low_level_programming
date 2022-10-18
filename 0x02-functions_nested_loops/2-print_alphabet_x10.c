#include "main.h"
/**
 * print_alphabet_x10 - writes alphabets a-z
 *
 * Return: void when successful
 */
void print_alphabet_x10(void)
{
	int y;

	for (y = 1 ; y <= 10 ; y++)
	{

		int x;
	for (x = 97 ; x <= 122 ; x++)
	{
	_putchar(x);
	}
	_putchar('\n');
	}
}
