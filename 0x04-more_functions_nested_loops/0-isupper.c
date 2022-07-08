#include "main.h"
#include <stdio.h>
/**
 * *_isupper - Shows 1 if the input is A
 * *uppercase character. Another cases, shows
 * *@c: is character
 * *Return: always 1 for uppercase and 0 for lowercase
 */
int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
