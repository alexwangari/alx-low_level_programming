#include "main.h"
/**
 * _strchr - returns a pointer at first occurence of character c in string s
 *
 * @s: pointer
 * @c: character being searched for
 *
 * Return: a pointer to dest
 */


char *_strchr(char *s, char c)
{
while(*s)
{
if (*s == c)
	s++;
else
	return (s);
}
if (c == '\0')

return (s);

return (NULL);
}
