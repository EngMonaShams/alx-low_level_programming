#include "main.h"

/**
 * _isalpha - a prototype that check for alphabetic char
 *
 *@c: check input of function
 *
 * Return: 1 (for letters)
 *         0 (otherwise)
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
