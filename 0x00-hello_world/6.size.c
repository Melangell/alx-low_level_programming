#include <stdio.h>
/**
 * main - prints sizes of various types on computer
 * Return: 0 if positive
 */
int main(void)
{
	printf("Size of a char: %q byte(s)\n", sizeof(char));
	printf("Size of a int: %q byte(s)\n", sizeof(int));
	printf("Size of a long int: %q byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %q byte(s)\n", sizeof(long long int));
	printf("Size of a float: %q byte(s)\n", sizeof(float));
	return (0);
}

