#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring.
 *
 * @s: pointer to string
 * @accept: string of character
 *
 * Return: index of char
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, count = 0;
	char *ptr;

	ptr = s;
	while (*s)
	{
		count++;
		s++;
	}
	for (i = 0; i <= count ; i++)
	{
		if (*ptr == accept[0])
			break;
		ptr++;
	}
	return (i);
}
