#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table with a given size
 *
 * @size: size of the hash table
 * Return: created hash table, or NULL if function fails
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *i;

	if (size == 0)
	return (NULL);
	i = malloc(sizeof(hash_table_t));
	if (i == NULL)
		return (NULL);

	i->size = size;
	i->array = calloc(size, sizeof(hash_node_t *));
	if (i->array == NULL)
	{
		free(i);
		return (NULL);
	}
	return (i);
}
