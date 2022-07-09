#include "main.h"

/**
 *  * print_number - prints an integer.
 *   * @n: input integer.
 */
void print_number(int n)
{
	unsigned int i, d, cnt;

	if (n < 0)
	{
		_putchar(45);
		i = n * -1;
	}
	else
	{
		i = n;
	}

	d = i;
	cnt = 1;

	while (d > 9)
	{
		d /= 10;
		cnt *= 10;
	}

	for (; cnt >= 1; cnt /= 10)
	{
		_putchar(((i / cnt) % 10) + 48);
	}
}
