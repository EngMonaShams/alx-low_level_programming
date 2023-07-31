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
	char *ptr1, *ptr2, *ptr3;
	int i, count = 0, flag = 0;
	int len = 0, j;

	if (*needle == '\0')
		return (haystack);

	ptr1 = needle;

	while (*ptr1)
	{
		count++;
		ptr1++;
	}
	ptr2 = haystack;
	while (*ptr2)
	{
		len++;
		ptr2++;
	}

	ptr3 = haystack;
	for (j = 0; j <= len - count; j++)
	{
		ptr3 = &haystack[j];
		if (haystack[j] == needle[0])
		{
			flag = 1;
			for (i = 0; i < count; i++)
				if (haystack[j + i] != needle[i])
				{
					flag = 0;
					break;
				}
			if (flag == 1)
				return (ptr3);
		}
	}
	return (NULL);
}
