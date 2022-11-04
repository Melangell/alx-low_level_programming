#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1 if successful
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			sum = sum + atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
	if (atoi(argv[i]) != '0' || atoi(argv[i]) != '9')
	{
		printf("0\n");
	}
}
