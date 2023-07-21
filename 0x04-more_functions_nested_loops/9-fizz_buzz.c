#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints the numbers from 1 to 100
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	printf("%d", 1);
	for (i = 2; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 != 0))
			printf(" Fizz");
		else if ((i % 3 != 0) && (i % 5 == 0))
			printf(" Buzz");
		else if ((i % 3 == 0) && (i % 5 == 0))
			printf(" FizzBuzz");
		else
			printf(" %d", i);
	}
	putchar('\n');
	return (0);
}
