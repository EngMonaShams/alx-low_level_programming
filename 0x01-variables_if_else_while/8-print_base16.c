#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints lower case alphabet
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 48 ; i < 58 ; i++)
		putchar(i);
	for (i = 97 ; i <= 102 ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
