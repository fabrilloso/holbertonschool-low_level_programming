#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main-Entry point of the program
 *
 *This program prints if a random number is positive, negative
 *or is zero.
 *
 *Return:Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
