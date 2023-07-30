#include <stdio.h>
#include <math.h>

/**
 * isprime - a funtion that check for prime number
 *
 * @n : input of isprime
 *
 * Return: 1 (isprime)
 *         0 (not prime)
 */
int isprime(long int n)
{
	long int i;
	int prime = 1;

	if (n == 0 || n == 1)
		prime = 0;
	for (i = 2; i <= sqrt(n); i++)
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
	long int num, factor;

	num = 612852475143;
	for (factor = sqrt(num); factor > 1; factor--)
	{
		if (num % factor == 0 && isprime(factor))
		{
			printf("%ld\n", factor);
			break;
		}
		else
			continue;
	}
	return (0);
}
