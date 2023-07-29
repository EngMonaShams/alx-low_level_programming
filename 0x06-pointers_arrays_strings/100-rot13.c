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
		while ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
		{
			if ((*str >= 'A' && *str <= 'M')
				       || (*str >= 'a' && *str <= 'm'))
			{
				*str += 13;
				break;
			}
			*str -= 13;
			break;
		}
		str++;
	}
	return (ptr);
}
