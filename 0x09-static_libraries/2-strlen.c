#include "main.h"

/**
 * _strlen - a function that updates the value it points to to 98.
 *
 * @s : pointer to int
 *
 * Return: count (length of string)
 */

int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
