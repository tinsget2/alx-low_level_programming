#include "main.h"
#include <stdio.h>

/**
 *print_rev - printes reverse string
 *@s: is sting char
 *
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
