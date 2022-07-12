#include "main.h"
#include <stdio.h>

/**
 *_strlen - calculates string length
 *@s: string character
 *Return: - returns the n th value
 */

int _strlen(char *s)
{
	int a;

	a = 0;
	while (*(a + s))
	{
		a++;
	}
	return (a);
}
