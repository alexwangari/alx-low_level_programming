#include "main.h"
/**
 * _strbrk - returns a pointer at first occurence of character s in string accept
 *
 * @s: pointer
 * 
 *
 * Return: a pointer to s
 */


char *_strpbrk(char *s, char *accept)
{
int i;

		while (*s)
		{
		for (i = 0; accept[i]; i++)
		{
		if (*s == accept[i])
		return (s);
		}
		s++;
		}
		return (NULL);
}
