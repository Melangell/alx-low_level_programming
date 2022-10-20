#include "main.h"
/**
 * print_diagonal - draws diagonal line
 * @n: character to be verified
 * Return: no return
 */
void print_diagonal(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
}
