#include "lists.h"

/**
 * sum_listint - a function that  prints all the elements of a list_t list.
 *
 * @head: head node
 *
 * Return: size of list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
