#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints alphabetes in lowercase except for q and e
*
* Return: Lowercase followed by a new line.
*/
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		putchar(c);
	}
	putchar('\n');

	return (0);
}
