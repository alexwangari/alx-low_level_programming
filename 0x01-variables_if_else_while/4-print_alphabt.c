#include<stdio.h>
/**
 * main - print alphabets and ommit some letters
 * Return: 0 when successful
*/
int main(void)
{
char alpha;

for (alpha = 'a' ; alpha <= 'z' ; alpha++)
{
if (alpha != 'q' && alpha != 'e')
putchar(alpha);
}
return (0);
}
