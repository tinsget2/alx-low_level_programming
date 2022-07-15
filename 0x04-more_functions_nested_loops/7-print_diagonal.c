#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - prints diagonal line
 * @n: - total diagonal line
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			if (i == j)
			{
				_putchar(92);
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}

		}
	}
	}
}
