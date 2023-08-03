#include "main.h"

/**
 * _sqrt_fn - a function that check for prime number recursively
 *
 * @n: number
 * @guess: checker
 *
 * Return: int
 */
int _sqrt_fn(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess < n)
		return (_sqrt_fn(n, guess + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - a function that get sqrt of a number n
 *
 * @n: number
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (_sqrt_fn(n, 1));
}
