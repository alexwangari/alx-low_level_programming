#include "main.h"
/**
 * _isupper - checks for upper character
 * @c: The character to be expanded
 *
 * Return: 1 if upper
 * 0 therwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
