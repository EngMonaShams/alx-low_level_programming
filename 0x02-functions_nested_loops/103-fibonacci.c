#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	long pre = 1, num = 1, nxt;
	unsigned long int sum = 0;

	do {
		nxt = pre + num;
		pre = num;
		num = nxt;
		if (num % 2 == 0)
			sum += num;
	} while (num <= 4000000);
	printf("%lu\n", sum);

	return (0);
}
