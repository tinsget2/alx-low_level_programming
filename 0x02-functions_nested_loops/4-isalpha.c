#include "main.h"
#include <stdio.h>
/**
*_isalpha - Shows 1 if the input is a
*lowercase and upercase character. Another cases, shows
*@c: character
*
*Return: Always 1 for upercase and lowercase 0 if it is not
*/
int _isalpha(int c)
{
	int j;

	if (c >= 65 && c <= 90)
	{
		j = 1;
	}
	else if (c >= 97 && c <= 122)
	{
		j = 1;
	}
	else
	{
		j = 0;
	}

	return (j);

}
