#include "main.h"
/**
 * swap_int - swaps value of two integers
 * @a: First pointer
 * @b: Other pointer
 *
 */
void swap_int(int *a, int *b)
{
int x=*a;

*a = *b;
*b = x;
}
