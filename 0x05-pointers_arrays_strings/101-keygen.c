#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate keygen
 * Return: zero
 */

int main(void)
{
	int num;
	char c;

	srand(time(NULL));
	while (num <= 2645)
	{
		c = rand() % 128;
		num += c;
		putchar(c);
	}
	putchar(2772 - num);
	return (0);
}
