#include "main.h"
/**
 * main - program to itself
 *
 * @argc: integer counter
 * @argv: pointer to array of string
 * 
 *
 * Return: 0 when successful
 *
 */

int main(int argc, char *argv[])
{
	unsigned int n, m, add;

	if (argc < 1)
	{
	printf("%d\n", 0);
	return (0);
	}
			
	n = atoi(argv[1]);

	m = atoi(argv[2]);

	add = n + m;

	printf("%i\n", add);

return (0);
}
