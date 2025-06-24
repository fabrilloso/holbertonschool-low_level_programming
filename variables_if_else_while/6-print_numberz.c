#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints number from 0 to 9
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int c;

	for (c = 0; c <= 9; c++)
		putchar('0' + c);
	putchar('\n');

	return (0);
}
