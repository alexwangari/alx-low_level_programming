#include "main.h"
/**
 * _isalpha - checks for alphabet character
 * @c: letter being checked
 * Return: 1
 * Return: 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (0);
	}
	else
	{
	return (1);
	}
}
