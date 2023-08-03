#include "main.h"


int is_prime(int n, int z)
{
	if (n <= 1)
		return (0);
	else if (n % z == 0)
		return (0);
	else if (z == 2)
		return (1);
	else
		return (is_prime(n, z - 1));
}
/**
 * is_prime_number - a function that check for prime number
 *
 * @n: number
 *
 * Return: int
 */

int is_prime_number(int n)
{
	return (is_prime(n, n / 2));
}
