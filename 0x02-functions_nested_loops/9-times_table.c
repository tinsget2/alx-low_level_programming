#include "main.h"
#include <stdio.h>
/**
*times_table - computes the absolute value of
*
*
* Return: Always 1
*/
void times_table(void)
{
	int i, g, j;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (g = 1; g <= 9; g++)
		{
			j = i * g;
			_putchar(44);
			_putchar(32);
			if (j <= 9)
			{
				_putchar(32);
				_putchar(j + 48);

			}
			else
			{
				_putchar((j / 10) + 48);
				_putchar((j % 10) + 48);


			}

		}
		_putchar('\n');
	}
}
