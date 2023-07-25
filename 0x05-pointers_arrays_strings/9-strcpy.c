#include "main.h"

/**
 * _strcpy - a function that updates the value it points to to 98.
 *
 * @dest : destination
 * @src : source
 *
 * Return: dest (pointer)
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	do {
		dest[i] = src[i];
		i++;
	} while (src[i] != '\0');
	return (dest);
}
