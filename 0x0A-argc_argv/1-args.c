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
	(void)argv[argc];
	printf("%d\n", argc - 1);

return (0);
}
