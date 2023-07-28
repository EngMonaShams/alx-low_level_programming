#include "main.h"

/**
 * *leet - a function that concatenates two strings.
 *
 * @str : pointer to destination
 *
 * Return: pointer to string
 *
 */

char *leet(char *str)
{
	char *ptr = str;
	char s_upper[] = "AEOTL";
	char s_lower[] = "aeotl";
	int value[] = {4, 3, 0, 7, 1};
	int i;

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == s_upper[i] || *str == s_lower[i])
			{
			       *str = 48 + value[i];
			}
		}
		str++;
	}
	return (ptr);
}
