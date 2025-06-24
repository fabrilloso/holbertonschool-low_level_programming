#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints alphabetes in lower case followed by a new line
*
* Return: Lowercase followed by a new line.
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
