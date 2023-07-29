#include "main.h"

/**
 * *rot13 - a function that concatenates two strings.
 *
 * @str : pointer to destination
 *
 * Return: pointer to string
 *
 */

char *rot13(char *str)
{
	char *ptr = str;

	while (*str)
	{
		if ((*str >= 'A' && *str <= 'M')
			       || (*str >= 'a' && *str <= 'm'))
			*str += 13;
		else if ((*str >= 'N' && *str <= 'Z')
				|| (*str >= 'n' && *str <= 'z'))
			*str -= 13;
		str++;
	}
	return (ptr);
}
