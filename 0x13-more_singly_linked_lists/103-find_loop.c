#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *i, *prev;

	i = head;
	prev = head;
	while (head && i && i->next)
	{
		head = head->next;
		i = i->next->next;

		if (head == i)
		{
			head = prev;
			prev =  i;
			while (1)
			{
				p2 = prev;
				while (i->next != head && i->next != prev)
				{
					i = i->next;
				}
				if (i->next == head)
					break;

				head = head->next;
			}
			return (i->next);
		}
	}

	return (NULL);
}
