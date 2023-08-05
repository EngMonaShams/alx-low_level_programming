#include <stdio.h>
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
	if (argc < 3)
		printf("Error\n");
	else
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
