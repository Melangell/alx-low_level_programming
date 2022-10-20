#include "main.h"
/**
 * print_line - draws straight lines in terminal
 * @n: character to be verified
 * Return: no return
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
