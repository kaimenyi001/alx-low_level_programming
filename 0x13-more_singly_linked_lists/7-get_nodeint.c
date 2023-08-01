#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: head of a list
 * @index: the index of the node
 * Return: void
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
