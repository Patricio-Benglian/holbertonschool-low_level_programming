#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_delete - deletes hash table
 * @ht: hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *cursor, *temp; /* temporary node */
	size_t i;

	for (i = 0; i < ht->size; i++)
	{
		cursor = ht->array[i];
		while (cursor)
		{
			temp = cursor;
			free(cursor->key);
			free(cursor->value);
			free(cursor);
			cursor = temp->next;
		}
	}
	free(ht->array);
	free(ht);
}
