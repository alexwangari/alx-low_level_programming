#include "main.h"
/**
 * print_alphabet - writes alphabets a-z
 *
 * Return: void when successful
 */
void print_alphabet(void)
{
	int x;

	for (x = 97 ; x <= 122 ; x++)
	{
	_putchar(x);
	}

	_putchar('\n');
}
