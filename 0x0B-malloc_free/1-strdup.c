#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be copied
 * Return: return a pointer to duplicated string if successful
 */
char *_strdup(char *str)
{
	char *n;
	unsigned int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 1; str[i] != '\0'; i++)
	{
		n = malloc(sizeof(str) * i);
	}
	if (n == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < i; j++)
	{
		n[j] = str[j];
	}
	return (n);
}
