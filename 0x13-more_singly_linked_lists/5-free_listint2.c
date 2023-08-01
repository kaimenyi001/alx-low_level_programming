#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: head of a list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *c;

	if (head == NULL)
		return;
	c = *head;
	while (c != NULL)
	{
		temp = c;
		c = c->next;
		free(temp);
	}
	*head = NULL;
}
