#include "main.h"
#include <stdio.h>
/**
*_abs - computes the absolute value of an integer
*lowercase and upercase character. Another cases, shows
*@n: character
*
*Return: Always 1
*/
int _abs(int n)
{
	int r;

	if (n < 0)
	{
		r = n * -1;
	}
	else if (n == 0)
	{
		r = 0;
	}
	else
	{
		r = n;
	}

	return (r);

}
