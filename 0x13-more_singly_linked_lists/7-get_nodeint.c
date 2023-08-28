#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a listint_t
 *
 * @head: pointer to first node
 * @index: index of the node
 *
 * Return: pointer to node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	int n;

	node = head;
	for (n = 0; node && n < index; n++)
		node = node->next;
	return (node);
}
