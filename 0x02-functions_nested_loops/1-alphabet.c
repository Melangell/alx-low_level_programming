#include <unistd.h>
#include "main.h"
/**
 * main - prints the alphabet in lowercase
 * Return: 0 if successful
 */
int main(void)
{
	int c;
	int _putchar(char c);
	print_alphabet();

	for (c = 97; c <= 122; c++)
	{
		write(1, "_putchar\n", 9);
	}
	return (0);
}
