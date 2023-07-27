#include "main.h"

/**
 * *_strncat - a function that concatenates two strings.
 *
 * @dest : pointer to destination
 * @src : pointer to source
 * @n : number of char
 *
 * Return: pointer to string
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int c1 = 0, c2 = 0;

	while (dest[c1])
		c1++;
	while ((c2 < n) && (src[c2] != '\0'))
	{
		dest[c1++] = src[c2];
		c2++;
	}
	return (dest);
}
