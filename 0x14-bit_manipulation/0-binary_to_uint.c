#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1 characters
 * Return: the converted number or 0 if there is one or more characters in
 * string @b that is not 0 or 1, or @b is NULL
 **/
unsigned int binary_to_uint(const char *b)
{

int i = 0;

unsigned int x = 0;

int pwr = 0;

if (b == NULL)

return (0);

while (b[i + 1])
i++;

while (i >= 0)
{
	if (b[i] == '0')
	{
	i--;
	pwr++;
	
	}

	else if (b[i] == '1')
	{
	x += (1 << pwr);
	i--;
	pwr++;

	}
	else
	return (0);
}

return (x);
}
