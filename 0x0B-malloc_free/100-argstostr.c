#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that
 *
 * @ac: number of args
 * @av: array of args
 *
 * Return: pointer s
 */

char *argstostr(int ac, char **av)
{
	int i, j, nc = 0, count = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++, nc++)
		for (j = 0; av[i][j] != '\0'; j++)
			nc++;
	s = malloc(nc + 1);
	if (s == 0)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, count++)
			s[count] = av[i][j];
		s[count] = '\n';
		count++;
	}
	return (s);
}
