#include "main.h"
#include <stdio.h>

/**
 * print_line - prints the underscore caracter n times
 * @n: is the number of underscore character printed
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
