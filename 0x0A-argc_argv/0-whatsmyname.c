#include "main.h"
#include <stdio.h>
/**
 * main - prints its name
 * @argc: argument that counts command line
 * @argv: argument vector
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	(void) argc;
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
