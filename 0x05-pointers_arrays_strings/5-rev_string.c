#include "main.h"

/**
 * rev_string - a function that updates the value it points to to 98.
 *
 * @s : pointer to int
 *
 */

void rev_string(char *s)
{
	int i, j;
	char temp;

	while (s[i])
		i++;
	for (j = 0 ; j < i / 2 ; j++)
	{
		temp = s[j];
		s[j] = s[i - j - 1];
		s[i - j - 1] = temp;
	}
}
