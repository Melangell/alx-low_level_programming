#include <stdio.h>
#include <unistd.h>
/**
 * main - alternative output function
 * Return: 1 if successful
 */
int main(void)
{
	int c;

	c = write("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
	return (1);
}
