#include <stdio.h>
#include <unistd.h>
/**
 * main - prints _putchar
 * Return: 0 if successful
 */
int main(void)
{
	write(2, "_putchar\n", 9);
	return (0);
}
