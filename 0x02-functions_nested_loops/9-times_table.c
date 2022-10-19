#include "main.h"

/**
 * times_table - Prints the 9 times table
 * Return: always 0
 */

void times_table(void)
{
	int i = 0, j, tableValue;

	for (i = 0; i < 10; i++)
	{
		j = 0;

	for (j = 0; j < 10; j++)
	{
	tableValue = i * j;

	if (j > 0)
	{
	_putchar(',');

	}

	if (tableValue < 10)
	{
	if (j > 0)
	{
	_putchar(' ');
	_putchar(' ');
	}
	_putchar(tableValue + '0');
	}
	else
	{
	_putchar(' ');
	print_all_digits(tableValue);

	}
	}
	_putchar('\n');

}
}
/**
 * print_all_digits - prints all the digits
 * @i: The integer
 *
 * Return: void
 */
void print_all_digits(int i)
{
	if (i / 10)
		print_all_digits(i / 10);
	_putchar(i % 10 + '0');
}
