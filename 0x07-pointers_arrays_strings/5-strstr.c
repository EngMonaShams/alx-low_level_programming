#include "main.h"

/**
 * _strstr - a function that locates a substring.
 *
 * @haystack: pointer to string
 * @needle: string of string
 *
 * Return: pointer of char
 */

char *_strstr(char *haystack, char *needle)
{
	char *ptr;
	int i, count = 0, flag;

	ptr = needle;

	while (*ptr)
	{
		count++;
		ptr++;
	}

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			flag = 1;
			for (i = 0; i < count; i++)
				if (haystack[i] != needle[i])
				{
					flag = 0;
					break;
				}
			if (flag == 1)
				return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
