#include "lists.h"


/**
 * _strlen - afunction that return string length
 *
 * @s: pointer to string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}
/**
 * print_list - a function that  prints all the elements of a list_t list.
 *
 * @h: head node
 *
 * Return: size of list
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
