#include "main.h"
#include <stdio.h>
/**
*_islower - Shows 1 if the input is a
*lowercase character. Another cases, shows
*@c: character
*
*Return: Always 0 for uper case 1 for lower case
*/
int _islower(int c)
{

	if (c < 90)

	{
		return (0);
	}
	else
	{
		return (1);
	}
}
