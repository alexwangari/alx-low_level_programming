#include "main.h"

/**
 * print_triangle - prints a triangle then a new line
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
if (size > 0)
{
int i = 0, j = 0, space = size - 1;

for (i = 0; i < size; i++)
{
for (j = 0; j < space; j++)
{
_putchar(' ');
}

for (j = 0; j < i + 1; j++)
{
_putchar('#');
}

_putchar('\n');
space--;
}
}
else
_putchar('\n');
}

