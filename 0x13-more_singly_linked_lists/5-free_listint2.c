#include "lists.h"

/**
 * free_listint2 - a function that frees a list_t list.
 *
 * @head: head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *node, *next_node;

	if (!head)
		return;
	node = *head;
	while (node)
	{
		next_node = node->next;
		free(node);
		node = next_node;
	}
	*head = NULL;
}
