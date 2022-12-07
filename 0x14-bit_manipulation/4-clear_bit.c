#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at given index
 * @n: pointer to number
 * @index: place to change bit to 0
 * Return: 1 if it works, -1 if there's an error
 **/

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int num = sizeof(n) * 8 - 1;
unsigned int x = 1;

if (index > num)
return (-1);

*n = *n & ~(x << index);
return (1);
}
