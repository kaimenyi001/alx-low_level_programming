#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of the linked list
 * @str: string
 * Return: void
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t b;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	for  (b = 0; str[b]; b++)
		;

	new->len = b;
	new->next = *head;
	*head = new;

	return (*head);
}
