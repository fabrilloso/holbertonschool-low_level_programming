#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints the alphabet mirrored
*
* Return: Alway 0 (Success).
*/
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);

	putchar('\n');

	return (0);
}
