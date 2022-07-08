#include "main.h"
#include <stdio.h>
/**
* print_last_digit - computes the absolute value of an integer
* lowercase and upercase character. Another cases, shows
* @n: character
*
* Return: Always 1
*/
int print_last_digit(int n)
{
	int j;

	j = n % 10;
	if (n < 0)
	{
		_putchar(-j + 48);
	return (-j);
	}
	else
	{
		_putchar(j + 48);
	return (j);
	}
}
