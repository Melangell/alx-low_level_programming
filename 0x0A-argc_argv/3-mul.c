#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multipies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 or 0 if successful
 */
int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

