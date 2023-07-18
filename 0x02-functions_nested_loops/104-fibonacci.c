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
	int seq = 1;
	unsigned long int pre = 1, num = 1, nxt;

	printf("%d", 1);
	do {
		nxt = pre + num;
		pre = num;
		num = nxt;
		printf(", %lu", num);
		seq++;
	} while (seq < 98);
	putchar('\n');

	return (0);
}
