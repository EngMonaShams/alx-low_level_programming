#include "main.h"

/**
 * isseparator - a function to check sepataror char
 *
 * @c : character
 *
 * Return: 1 (sep)
 *         0 (otherwise)
 *
 */
int isseparator(char c)
{
	int j;
	char sep[] = ",;.!?\"(){}\n\t ";

	for (j = 0; j <= 12; j++)
		if (c == sep[j])
			return (1);
	return (0);

}

/**
 * *cap_string - a function that cap string
 *
 * @str : pointer to string
 *
 * Return: pointer to string
 *
 */

char *cap_string(char *str)
{
	int i;
	int sep = 1;

	for (i = 0; str[i]; i++)
	{
		if (isseparator(str[i]))
			sep = 1;
		else if (str[i] <= 122 && str[i] >= 97 && sep)
		{
			str[i] -= 32;
			sep = 0;
		}
		else
			sep = 0;
	}

	return (str);
}
