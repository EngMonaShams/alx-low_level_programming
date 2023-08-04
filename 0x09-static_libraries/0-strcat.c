#include "main.h"

/**
 * *_strcat - a function that concatenates two strings.
 *
 * @dest : pointer to destination
 * @src : pointer to source
 *
 * Return: pointer to string
 *
 */

char *_strcat(char *dest, char *src)
{
	int c1 = 0, c2;

	while (dest[c1])
		c1++;
	for (c2 = 0; src[c2]; c2++)
		dest[c1++] = src[c2];
	return (dest);
}
