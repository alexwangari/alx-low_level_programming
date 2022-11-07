#include "main.h"
/**
 * main - program to itself
 *
 * @argc: integer counter
 * @argv: pointer to array of string
 *
 * Return: 0 when successful
 *
 */

int main(int argc, char *argv[])
{
	int n, m, mul;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	n = atoi(argv[1]);

	m = atoi(argv[2]);

	mul = n * m;

	printf("%i\n", mul);

return (0);
}
