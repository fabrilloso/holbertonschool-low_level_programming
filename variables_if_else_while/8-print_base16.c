#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints number from 0 to 9
* adding letters from a to f
* Return: Always 0 (Success)
*/
int main(void)
{
	int c;
	char d;

	for (c = 0; c <= 9; c++)
	putchar('0' + c);
	for (d = 'a'; d <= 'f'; d++)
	{
		putchar(d);
	}
	putchar('\n');

	return (0);
}
