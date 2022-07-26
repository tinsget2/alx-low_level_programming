#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *crArr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	crArr = malloc(sizeof(c) * size);

	if (crArr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		crArr[i] = c;

	return (crArr);
}
