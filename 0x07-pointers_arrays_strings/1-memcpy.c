#include "main.h"
/**
 * _memcpy - fill memory with a contant byte
 *
 * @dest: pointer 
 * @n: the number of bytes to be copied
 * @src: pointer
 *
 * Return: a pointer to dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{

unsigned int i;

for (i = 0 ; i < n ; i++)
{
src[i] = dest[i];

}
return (dest);
}
