#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that  prints the sum of all the multiples of 3 or 5
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n, sum;

	for (n = 1; n <= 1024; n++)
	{
		if (n % 5 == 0 || n % 3 == 0)
			sum += n;
	}
	printf("%d\n", sum);
	return (0);
}
