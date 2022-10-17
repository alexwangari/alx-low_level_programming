#include<stdio.h>
/**
 * main - write aphabets in lowercase then upper case
 * Return: 0 when all is successful
*/
int main(void)
{
char alpha;

for (alpha = 'a' ; alpha <= 'z' ; alpha++)
putchar(alpha);
for (alpha = 'A' ; alpha <= 'Z' ; alpha++)
putchar(alpha);
putchar('\n');

return (0);
}
