#include "main.h"
/**
 * _strncpy - writes the character c to stdout
 * @dest: pointer
 * @src: pointer
 * @n: integer
 *
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strncpy(char *dest, char *src, int n)
{
int j;

j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}

return (dest);
}
