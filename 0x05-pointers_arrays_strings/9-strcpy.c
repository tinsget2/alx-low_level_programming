#include "main.h"
#include "stdio.h"
/**
 * * *_strcpy - puts character
 * * @dest: destination
 * * @src: sorce
 * * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	int c;

	for (c = 0; (*(c + src)); c++)
	{
		*(c + dest) = *(c + src);

		if (*(c + 1 + src) == '\0')
		{
			(*(c + 1 + dest)) = '\0';
		}
	}

	return (dest);
}
