#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

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
	int sum = 0;

	while (--argc)
	{
		if ((*argv[argc] >= '0' && *argv[argc] <= '9') || *argv[argc] == '-')
			sum += atoi(argv[argc]);
		else
			return (printf("Error\n"), 1);
	}
	printf("%d\n", sum);
	return (0);
}
