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
	hash_node_t *pNode, *temp; /* node to add */
	unsigned long int pos; /* index position */

	pNode = malloc(sizeof(hash_node_t));
	if (!pNode)
	{
		free(pNode);
		return (0);
	}
	if (!key || !ht)
		return (0);

	/* set values */
	pNode->key = strdup(key);
	pNode->value = strdup(value);
	pNode->next = NULL;

	/* get hash and index for node */
	pos = key_index((const unsigned char *)key, ht->size);

	/* check if index is already occupied? */
	if (!ht->array[pos]) /* if not */
		ht->array[pos] = pNode;
	else /* if so */
	{
		/* if same key, overwrite *//* should prob check every node */
		if (strcmp(ht->array[pos]->key, key) == 0)
		{
			temp = ht->array[pos];
			free(ht->array[pos]->value);
			free(ht->array[pos]->key);
			free(ht->array[pos]);
			ht->array[pos] = pNode;
			pNode->next = temp->next;
		}
		/* if synonym, chain */
		else
		pNode->next = ht->array[pos];
		ht->array[pos] = pNode;
	}
	return (1);
}
