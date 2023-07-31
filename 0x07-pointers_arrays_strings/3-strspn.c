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
	unsigned int s_count, acc_count;

	for (s_count = 0; s[s_count] != '\0'; s_count++)
	{
		for (acc_count = 0; accept[acc_count] != s[s_count]; acc_count++)
			if (accept[acc_count] == '\0')
				return (s_count);
	}
	return (s_count);
}
