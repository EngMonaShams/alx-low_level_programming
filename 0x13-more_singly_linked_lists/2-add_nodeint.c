#include "lists.h"

/**
 * add_nodeint - a function that  prints all the elements of a list_t list.
 *
 * @head: pointer to head location
 *
 * @n: new head
 *
 * Return: size of list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head = malloc(sizeof(listint_t));

	if (!head || !new_head)
		return (NULL);
	if (n)
	{
		new_head->n = n;
		if (!new_head->n)
		{
			free(new_head);
			return (NULL);
		}
	}

	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
