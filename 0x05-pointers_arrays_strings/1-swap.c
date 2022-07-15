#include "main.h"
#include <stdio.h>
/**
 *swap_int - swaps variables
 *@a: the first variable
 *@b: the second variable
 *
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
