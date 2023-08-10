#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concat 2 strings
 *
 * @s1: input
 * @s2: string 2
 * @n: number of chars
 *
 * Return: pointer to string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int slength1, slength2, i, j;
	/*Null cases*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/*compute length of strings*/
	for (slength1 = 0; s1[slength1] != '\0'; slength1++)
		;
	for (slength2 = 0; s2[slength2] != '\0'; slength2++)
		;
	if (n >= slength2)
		n = slength2;
	/*reserving memory*/
	str = malloc(slength1 + n + 1);
	/*check memory allocation*/
	if (str == NULL)
		return (NULL);
	/*copy string1*/
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	/*copy string2*/
	for (j = 0; j < n; j++)
		str[i++] = s2[j];
	str[i] = '\0';
	return (str);
}
