#include "main.h"
#include "stdio.h"
/**
 * * print_array - puts character
 * * @n: int
 * * @a: array
 * * Return: Always 0
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; (*(c + a)) && c < n; c++)
	{
		if (c > 0 && c < n)
		{
			printf(", ");
		}
		printf("%d", (*(c + a)));
	}
	printf("\n");
}
