#include <stdio.h>

/**
 * isprime - a funtion that check for prime number
 *
 * @n : input of isprime
 *
 * Return: 1 (isprime)
 *         0 (not prime)
 */
int isprime(int n)
{
	int i, prime = 1;

	if (n == 0 || n == 1)
		prime = 0;
	for (i = 2; i <= n / 2; ++i)
	{
		if (n % i == 0)
			prime = 0;
	}
	return (prime);
}

/**
 * main - Entry point
 *
 * Description: A C program that calculates the largest prime factor
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int num, factor;

	num = 1231952;
	for (factor = num / 2; factor > 0; factor--)
	{
		if (num % factor == 0 && isprime(factor))
		{
			printf("%d\n", factor);
			break;
		}
		else
			continue;
	}
	return (0);
}
