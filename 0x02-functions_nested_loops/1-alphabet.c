#include "main.h"
/**
 * main - prints the alphabet in lowercase
 * Return: 0 if successful
 */
int main(void)
{
	print_alphabet();

	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
