#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and ints it with specific char
 * @size: unsigned int size
 * @c: character to be arrayed
 * Return: pointer of an array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *ar;

	if (size == 0)
	{
		return (NULL);
	}
	ar = malloc(size * sizeof(c));
	if (ar == 0)
	{
		return (NULL);
	}
	for (n = 0; n < size; n++)
	{
		ar[n] = c;
	}
	return (ar);
}
