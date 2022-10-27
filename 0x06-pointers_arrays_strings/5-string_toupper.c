#include "main.h"
/**
 * string_toupper - changes letters of string to uppercase
 * @str: letters to convert
 * Return: returns to str
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
	return (str);
}
