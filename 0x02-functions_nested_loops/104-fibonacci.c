#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int c, boolean, boolean2;
	long int a1, a2, an, an2, n11, n22;

	a1 = 1;
	a2 = 2;
	boolean =  boolean2 = 1;
	printf("%ld, %ld", a1, a2);
	for (c = 0; c < 96; c++)
	{
		if (boolean)
		{
			an = a1 + a2;
			printf(", %ld", an);
			a1 = a2;
			a2 = an;
		}
		else
		{
			if (boolean2)
			{
				n11 = a1 % 1000000000;
				n22 = a2 % 1000000000;
				a1 = a1 / 1000000000;
				a2 = a2 / 1000000000;
				boolean2 = 0;
			}
			an2 = (n11 + n22);
			an = a1 + a2 + (an2 / 1000000000);
			printf(", %ld", an);
			printf("%ld", an2 % 1000000000);
			a1 = a2;
			n11 = n22;
			a2 = an;
			n22 = (an2 % 1000000000);
		}
		if (((a1 + a2) < 0) && boolean == 1)
			boolean = 0;
	}
	printf("\n");
	return (0);
}
