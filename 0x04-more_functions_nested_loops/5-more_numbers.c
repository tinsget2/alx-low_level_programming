#include "main.h"
#include <stdio.h>

/**
 *  more_numbers - prints numbers rundomly
 *  i: is an iterator for 10X
 *  j: is an out put of numbers
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar(48 + (j / 10));
			}
			_putchar(48 + (j % 10));
		}
		_putchar('\n');
	}
}
