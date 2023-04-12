#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the hash table, or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->array = calloc(size, sizeof(hash_node_t *));
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;

	return (ht);
}
