#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of the linked list
 * @str: string
 * Return: void
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *cur;
	size_t b;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (b = 0; str[b]; b++)
		;

	new->len = b;
	new->next = NULL;
	cur = *head;

	if (cur == NULL)
	{
		*head = new;
	}
	else
	{
		while (cur->next != NULL)
			cur = cur->next;
		cur->next = new;
	}

	return (*head);
}
