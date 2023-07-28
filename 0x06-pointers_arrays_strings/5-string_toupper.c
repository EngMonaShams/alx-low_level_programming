#include "main.h"

/**
 * *string_toupper - a function that changes all lowercase letters
 *
 * @str : pointer to string
 *
 * Return: pointer to string
 *
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}
	return (str);
}
