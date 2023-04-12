#include "hash_tables.h"
/**
 * key_index - Returns the index of a key in a hash table
 * @key: The key to find the index of
 * @size: The size of the hash table array
 *
 * Return: The index of the key in the hash table array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	return (index);
}
