#include <stdio.h>
/**
 * main - prints 1 - 100 with fizzbuzz
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else
		{
		printf("%d", i);
		}
		putchar(32);
	}
		putchar('\n');

	return (0);
}
