#include "main.h"
#include <stdio.h>

/**
 * * print_most_numbers  - multiplies two integers
 * *
 */
void print_most_numbers(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		if (a != 50 && a != 52)
			_putchar(a);
	}
	_putchar('\n');
}
