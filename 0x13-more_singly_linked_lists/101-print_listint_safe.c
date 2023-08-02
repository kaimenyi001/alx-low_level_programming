#include "lists.h"

/**
 * free_lists - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_lists(lists_t **head)
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
 * print_listint_safe - prints a listint_t linked list.
 * @head: head of list
 * Return: void
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	lists_t *new, *p, *add;

	p = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(lists_t));

		if (new == NULL)
			exit(98);

		new->s = (void *)head;
		new->next = p;
		p = new;

		add = p;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->s)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_lists(&p);
				return (i);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		i++;
	}

	free_lists(&p);
	return (i);
}
