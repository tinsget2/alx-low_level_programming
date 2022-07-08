#include <stdio.h>

/**
 * main - Prints the add of the even-valued
 * fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int a1, a2, an, afn;

	a1 = 1;
	a2 = 2;
	an = afn = 0;
	while (an <= 4000000)
	{
		an = a1 + a2;
		a1 = a2;
		a2 = an;
		if ((a1 % 2) == 0)
		{
			afn += a1;
		}
	}
	printf("%ld\n", afn);
	return (0);
}
