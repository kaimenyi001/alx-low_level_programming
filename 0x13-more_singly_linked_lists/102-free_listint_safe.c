#include "lists.h"

/**
 * free_listss - frees a list.
 * @head: head of a list
 * Return: void
 */

void free_listss(listint_t **head)
{
	lists_t *temp, *c;

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

/**
 * free_listint_safe - frees a listint_t list
 * @h: head of list
 * Return: void
 */

size_t free_listint_safe(listint_t **h)
{
	size_t i = 0;
	lists_t *p, *new, *add;
	listint_t *c;

	p = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(lists_t));

		if (new == NULL)
			exit(98);

		new->s = (void *)*h;
		new->next = p;
		p = new;

		add = p;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->s)
			{
				*h = NULL;
				free_listss(&p);
				return (i);
			}
		}

		c = *h;
		*h = (*h)->next;
		free(c);
		i++;
	}

	*h = NULL;
	free_listss(&p);
	return (i);
}
