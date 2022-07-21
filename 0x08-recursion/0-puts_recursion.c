#include <stdio.h>
#include "main.h"

/**
 *_puts_recursion - is a function to print out the chars
 * @s: is a char vaianble
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
