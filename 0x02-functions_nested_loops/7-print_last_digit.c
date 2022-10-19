#include "main.h"
/**
 * print_last_digit - prints the last digit of number
 * @i: The integer to  be examined
 *
 * Return: The value of the last digit
 */
int print_last_digit(int i)
{
int lastdigit = i % 10;

if (lastdigit < 0)
lastdigit *= -1;
_putchar(lastdigit + '0');
return (lastdigit);
}
