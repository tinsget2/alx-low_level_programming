#include "main.h"
#include <stdio.h>
/**
 *  * *_isdigit - Shows 1 if the input is 0
 *   * Another cases, shows
 *    * *@c: is character
 *     * *Return: always 1 for Digit and 0 for other
 */
int _isdigit(int c)
{
	if (c <= 57 && c >= 48)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
