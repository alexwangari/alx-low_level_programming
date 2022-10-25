#include "main.h"
/**
 * _strlen - returns length of a string
 * Return: x
 * @s: char variable
 *
 */
int _strlen(char *s)
{
int x = 0;

while (*s != '\0')
{
x++;
s++;
}

return (x);
}
