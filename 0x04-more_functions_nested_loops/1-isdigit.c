#include "main.h"

/**
 * _isdigit - checks for 0 - 9
 * @c: character to be checked
 *
 * Retrun: 1 if c is a digit
 * 0 otherwise
 */
int _isdigit(int c)
{
	if (c >=48 && c <= 57)
	{
		return (1) ;
	}
		else
			return (0);
}
		
