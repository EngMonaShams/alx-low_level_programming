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
	(void)argc;
	while (*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
