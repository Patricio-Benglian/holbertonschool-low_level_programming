#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_get - gets a value associated with a key
 * @ht: hash table we are looking int
 * @key: key of the value
 * Return: Value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	size_t index; /* index of element we return */

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
		return (ht->array[index]->value);
	return (NULL);
}
