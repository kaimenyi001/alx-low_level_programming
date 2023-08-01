#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of list
 * @idx: the index of the list where the new node should be added
 * @n: integer
 * Return: void
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *c, *new;

	c = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = c;
		*head = new;
		return (*head);
	}
	while (idx > 1)
	{
		c = c->next;
		idx--;
		if (!c)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = c->next;
	c->next = new;
	return (new);
}
