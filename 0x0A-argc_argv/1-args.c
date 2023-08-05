#include <stdio.h>

/**
 * main - prints prog name
 *
 * @argc: counter
 * @argv: list
 *
 * Return: 0
 */

int main(int argc, char const *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
