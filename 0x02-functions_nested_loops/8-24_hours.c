#include "main.h"
#include <stdio.h>
/**
* jack_bauer - computes the absolute value of an integer
* lowercase and upercase character. Another cases, shows
*
*
* Return: Always 1
*/
void jack_bauer(void)
{

	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			_putchar(':');
			_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
			_putchar('\n');
		}
	}
}
