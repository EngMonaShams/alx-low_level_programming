#include "main.h"

/**
 * _strcmp - a function that compare two strings.
 *
 * @s1 : pointer to destination
 * @s2 : pointer to source
 *
 * Return: -15 (s1 < s2)
 *         0   (s1 = s2)
 *         15  (s1 > s2)
 *
 */

int _strcmp(char *s1, char *s2)
{
	int c1 = 0, c2 = 0;

	while (s1[c1])
		c1++;
	while (s2[c2])
		c2++;
	if (c1 < c2)
		return (-15);
	else if (c1 > c2)
		return (15);
	else
		return (0);
}
