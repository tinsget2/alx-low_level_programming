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
	while (s[i])
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		if (s[i] == '+')
		{
			sign = sign * 1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			int d = s[i] - '0';

			digit = digit * pow;
			digit = digit + d;
			pow = 10;
		}
		else if (pow == 10 && !(s[i] >= '0' && s[i] <= '9'))
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
