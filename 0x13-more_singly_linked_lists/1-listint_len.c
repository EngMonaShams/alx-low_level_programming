#include "lists.h"

/**
 * listint_len - a function that  prints all the elements of a list_t list.
 *
 * @h: head node
 *
 * Return: size of list
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
