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
	int i;

	for (i <= 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
