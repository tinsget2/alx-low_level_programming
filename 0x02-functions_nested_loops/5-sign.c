#include "main.h"
#include <stdio.h>
/**
* print_sign - Shows 1 if the input is a
*lowercase and upercase character. Another cases, shows
*@n: character
*
*Return: Always 1 for upercase and lowercase 0 if it is not
*/
int print_sign(int n)
{
	int j;

	if (n > 0)
	{
		_putchar('+');
		j = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		j = 0;
	}
	else
	{
		_putchar('-');
		j = -1;
	}

	return (j);

}
