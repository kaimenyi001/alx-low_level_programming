#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list
 * @h: linked list
 * Return: void
 */

size_t print_list(const list_t *h)
{
	size_t i;

	if (h->str == NULL)
		printf("[%d] %s\n", 0, '(nil)');
	for (i = 0; h; i++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
