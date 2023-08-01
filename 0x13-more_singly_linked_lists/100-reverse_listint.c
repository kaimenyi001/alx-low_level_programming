#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: head of list
 * Return: void
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *n, *m;

	m = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next = m;
		m = *head;
		*head = n;
	}

	*head = m;
	return (*head);
}
