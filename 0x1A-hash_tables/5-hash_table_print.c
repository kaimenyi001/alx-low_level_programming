#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table
 * Return: no return
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *tmp;
	char *j;

	if (ht == NULL)
		return;

	printf("{");
	j = "";

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			printf("%s'%s': '%s'", j, tmp->key, tmp->value);
			j = ", ";
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
