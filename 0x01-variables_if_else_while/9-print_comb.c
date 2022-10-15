#include <stdio.h>
/**
 * main - prints digits with commas
 * Return: 0 if successful
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
{
	putchar(n);
	if (n != 57)
	{
		putchar(44);
		putchar(32);
	}
}
{
	putchar('\n');
	return (0);
}
}
