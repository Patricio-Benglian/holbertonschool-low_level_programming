#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_set - adds element to hash table
 * @ht: hash table
 * @key: key
 * @value: value associated with key
 * Return: 1 if success, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *pNode; /* node to add */
	unsigned long int pos; /* index position */

	pNode = malloc(sizeof(hash_node_t));
	if (!pNode)
	{
		free(pNode);
		return (0);
	}
	if (!key)
		return (0);
	if (!ht)
		return (0);
	/* set values */
	pNode->key = strdup(key);
	pNode->value = strdup(value);
	pNode->next = NULL;
	/* get hash and index for node */
	pos = key_index((const unsigned char *)key, ht->size);
	pNode = ht->array[pos];
	return (1);
}
