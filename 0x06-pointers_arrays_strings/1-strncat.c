#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string one
 * @src: string two
 * @n: bytes from src
 * Return: return to string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	++i;

	for (j = 0; src[j] != '\0' && j < n; ++j, ++i)
	dest[i] = src[j];

	dest[i] = '\0';
	return (dest);
}
