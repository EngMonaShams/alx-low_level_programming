#include "lists.h"

/**
 * add_nodeint_end - a function that  prints all the elements of a list_t list.
 *
 * @head: pointer to head location
 *
 * @n: new head
 *
 * Return: size of list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *node = *head;

	if (!head || !new_node)
		return (NULL);
	if (n)
	{
		new_node->n = n;
		if (!new_node->n)
		{
			free(new_node);
			return (NULL);
		}
	}
	if (node)
	{
		while (node->next)
			node = node->next;
		node->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
