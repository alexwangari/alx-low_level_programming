#include "main.h"

/**
 * get_bit - returns the value of a bit at the given index
 * @n: the number to check
 * @index: the index to check the bit
 * Return: value of the bit at @index, -1 if there's an error
 **/

int get_bit(unsigned long int n, unsigned int index)
{

unsigned int x = 1;
unsigned int num = sizeof(n) * 8 - 1;

if (index > num)
return (-1);

x = x << index;

if (n & x)
return (1);
else
return (0);

}

