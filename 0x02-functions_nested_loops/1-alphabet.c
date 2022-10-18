#include "main.h"
/**
 * main - prints the alphabet in lowercase
 * Return: 0 if successful
 */
int main(void)
{
	print_alphabet();

	for (_putchar = 97; _putchar <= 122; _putchar++)
	{
		write(1, "_putchar\n", 9);
	}
	return (0);
}
