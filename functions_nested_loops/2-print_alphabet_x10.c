#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Hedaer file declaring functions required
 */

void print_alphabet_x10(void)
{
	int i;
	char letra;

	for (i = 0; i < 10; i++)
	{
		for (letra = 'a'; letra <= 'z'; letra++)
		{
			_putchar(letra);
		}
		_putchar('\n');
	}
}
