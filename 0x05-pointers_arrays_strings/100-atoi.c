#include "main.h"
/**
 * * _atoi - convert a string to an integer.
 * *
 * * @s: accepted character
 * * Return: 0
 */
int _atoi(char *s)
{
	int i;
	int sign = 1;
	int digit = 0;
	int pow = 0;

	i = 0;
	while (*(i + s))
	{
		if (*(i + s) == '-')
		{
			sign = sign * -1;
		}
		if (*(i + s) == '+')
		{
			sign = sign * 1;
		}
		if (*(i + s) >= '0' && *(i + s) <= '9')
		{
			int d = *(i + s) - '0';

			digit = digit * pow;
			digit = digit + d;
			pow = 10;
		}
		else if (pow == 10 && !(*(i + s) >= '0' && *(i + s) <= '9'))
		{
			return (digit * sign);
		}
		i++;
	}
	if (digit == 0)
	{
		return (0);
	}
	else
	{
		return (digit * sign);
	}
}
