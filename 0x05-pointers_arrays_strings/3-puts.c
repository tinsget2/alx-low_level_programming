#include "main.h"
#include <stdio.h>

/**
 *_puts - displays string
 *@str: the characters
 *
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
