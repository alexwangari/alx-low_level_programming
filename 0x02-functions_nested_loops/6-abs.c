#include "main.h"
/**
 * _abs - computes the absolute value of integer
 * @i: The integer
 *
 * Return: The absolute value of integer
 */
int _abs(int i)
{
	if (i < 0)
		return (i * -1);
	else
		return (i);
}
