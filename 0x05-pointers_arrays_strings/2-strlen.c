#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: character to be verified
 * Return: c if successful
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	c++;

	return (c);
}
