#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 * Return: new array
 */
int *array_range(int min, int max)
{
	char *ar;
	int i, j;

	if (min > max)
	{
		return (NULL);
	}
	ar = malloc(sizeof(*ar) * ((min * max) + 1));
	if (ar = NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		ar[i] = min;
	}
	return (ar);
}
