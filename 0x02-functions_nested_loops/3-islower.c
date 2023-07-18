#include "main.h"

/**
 * _islower - a prototype that check for lowercase char
 *
 *@c: check input of function
 *
 * Return: 1 (lowercase)
 *         0 (otherwise)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
