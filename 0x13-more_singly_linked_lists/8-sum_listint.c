#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * @head: head of list
 * Return: void
 */

int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head != NULL; sum += head->n, head = head->next)
		;
	return (sum);
}
