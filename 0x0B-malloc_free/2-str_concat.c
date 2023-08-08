#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that
 *
 * @s1: string1
 * @s2: string2
 *
 * Return: pointer m
 */

char *str_concat(char *s1, char *s2)
{
	char *m;
	int size1 = 0, size2 = 0, i;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	for (i = 0; s1[size1] != '\0'; size1++)
		;
	for (i = 0; s2[size2] != '\0'; size2++)
	m = malloc(size1 + size2 + 1);
	if (m == 0)
		return (NULL);
	for (i = 0; i < size1; i++)
		m[i] = s1[i];
	for (i = 0; i < size2; i++)
		m[size1 + i] = s2[i];
	return (m);
	}
