#include "main.h"

/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 **/

void puts2(char *str)
{
int l = 0;
int t = 0;
char *y = str;
int x;

while (*y != '\0')
{
y++;
l++;
}
t = l - 1;
for (x = 0 ; x <= t ; x++)
{
if (x % 2 == 0)
{
_putchar(str[x]);
}
}
_putchar('\n');
}
