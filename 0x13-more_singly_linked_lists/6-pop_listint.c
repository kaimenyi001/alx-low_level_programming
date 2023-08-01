#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: head of a list
 * Return: void
 */

int pop_listint(listint_t **head)
{
	int i;
	listint_t *c, *temp;

	if (*head == NULL)
		return (0);
	c = *head;
	i = c->n;
	temp = c->next;
	free(c);
	*head = temp;

	return (i);
}
