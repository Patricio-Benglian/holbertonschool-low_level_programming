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
	hash_node_t *temp;

	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		temp = ht->array[index];
		while (temp != NULL)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
			temp = temp->next;
		}
	}
	return (NULL);
}
