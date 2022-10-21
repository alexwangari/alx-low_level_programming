#include "main.h"
#include <stdlib.h>
#include <time.h>
/**
 *  * main - print if the number is positive,negative or 0
 *   * Return: 0
 *   */
int main (void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	switch(n)
	{
	case '0':

	printf("%d is zero\n", n);
	
	break;
	}

	return (0);
}
