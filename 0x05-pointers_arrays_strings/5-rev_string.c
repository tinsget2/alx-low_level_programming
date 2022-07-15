#include "main.h"
/**
 * * rev_string - puts character to swap
 * *
 * * @s: accepted character
 */
void rev_string(char *s)
{
	int a, b;
	char c;

	a = 0;
	b = 0;
	while (*(a + s) != '\0')
	{
		a++;
	}
	a = a - 1;
	while (a / 2 >= b)
	{
		c = (*((a - b) + s));
		(*((a - b) + s)) = (*(b + s));
		(*(b + s)) = c;
		b++;
	}
}
