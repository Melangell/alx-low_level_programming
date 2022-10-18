#include <unistd.h>
#include "main.h"
/**
 * main - prints the alphabet in lowercase
 * Return: 0 if successful
 */
int main(void)
{
	print_alphabet();
	int _putchar(char c);

	int i;
	for (i = 97; i <= 122; i++)
	{
		write(1, "_putchar\n", 9);
	}
	return (0);
}
