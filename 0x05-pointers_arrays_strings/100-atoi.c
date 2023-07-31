#include "main.h"

/**
 * _atoi - a function that updates the value it points to to 98.
 *
 * @s : pointer to string
 *
 * Return: int
 *
 */

int _atoi(char *s)
{
	int num = 0, sign = 1, flag = 0;
	do
	{
		while (*s == '-')
		{
			sign *= -1;
			s++;
		}
		while (*s >= '0' && *s <= '9')
		{
			num = num * 10 + (*s - '0');
			s++;
			flag = 1;
		}
		if (flag == 1)
			break;
	}while (s++);
	num *= sign;
	return (num);
}
