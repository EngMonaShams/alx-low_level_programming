#include "main.h"

/**
 *  wildcmp - a function that compare strings
 *
 * @s1: string
 * @s2: string 2
 *
 * Return: int
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == '\0' || *s2 == '\0')
		return (0);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
			return (1);
		return (wildcmp(s1 + 1, s2));
	}
	return (0);
}
