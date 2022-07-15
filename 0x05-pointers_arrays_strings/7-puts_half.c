#include "main.h"
/**
 * * puts_half - puts character
 * *
 * * @str: accepted character
 * * Return: Always 0
 */
void puts_half(char *str)
{
	int a, b;

	a = 0;
	while (*(a + str))
	{
		a++;
	}
	if (a % 2 == 0)
	{
		b = a / 2;
	}
	else
	{
		b = (a + 1) / 2;
	}

	while (b < a)
	{
		_putchar(*(b + str));
		b++;
	}
	_putchar('\n');
}
