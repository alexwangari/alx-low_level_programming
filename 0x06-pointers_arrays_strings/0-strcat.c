#include "main.h"
/**
 * _strcat - writes the character c to stdout
 * @dest: pointer
 * @src: pointer
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;

	while (dest[i] != '\0')
	{
	i++;
	}

	j = 0;

	while (src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}

	dest[i] = '\0';
	return (dest);
}
