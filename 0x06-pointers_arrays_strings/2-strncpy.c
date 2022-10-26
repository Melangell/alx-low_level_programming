#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: first string
 * @src: second string
 * Return: return to src
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; dest[i] != '\0'; ++i)
	src[i] = dest[i];

	src[i] = '\0';
	return (src);
}
