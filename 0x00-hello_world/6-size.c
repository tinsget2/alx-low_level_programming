#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char A;
	int B;
	long int C;
	long long D;
	float E;

	printf("Size of a char: %ld byte(s)\n", sizeof(A));
	printf("Size of an int: %ld byte(s)\n", sizeof(B));
	printf("Size of a long int: %ld byte(s)\n", sizeof(C));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(D));
	printf("Size of a float: %ld byte(s)\n", sizeof(E));
	return (0);
}
