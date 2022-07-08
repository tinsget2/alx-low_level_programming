#include "main.h"
#include <stdio.h>
/**
 * * _isupper shows the input char is uppercase or lower case
 * *@c: is character
 * *Returns always 1 for upper case and 0 for lower case
 */
int _isupper(int c)
{
	if (c < 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
