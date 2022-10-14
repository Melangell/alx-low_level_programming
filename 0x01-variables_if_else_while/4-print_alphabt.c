#include <stdio.h>
/**
 * main - prints all alphabets excluding 2 chars
 * Return: 0 if successful
 */
int main(void)
{
	int ch;
{
	for (ch = 'a'; ch <= 'z';)
	ch++;

	if (ch != 'e' && ch != 'q')
	putchar (ch);
}
	putchar ('\n');
	return (0);
}
