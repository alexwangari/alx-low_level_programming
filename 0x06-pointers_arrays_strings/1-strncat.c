#include "main.h"
/**
 * _strncat - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;

	while (dest[i] != '\0')
	{
	i++;
	}

	j = 0;

	while (j < n && src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}

	dest[i] = '\0';
	return (dest);
}
