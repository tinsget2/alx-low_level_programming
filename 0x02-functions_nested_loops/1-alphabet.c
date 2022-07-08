 #include "main.h"
 #include <stdio.h>
/**
* print_alphabet -  prints the alphabet.
* Return: Always 0
*
*/
int print_alphabet(void)
{
	int i, j;

	for (j = 0; j < 10; j++){
	for (i = 97; i < 123; i++)
	{
	_putchar(i);
	}
	}
	_putchar('\n');
	return (0);
}
