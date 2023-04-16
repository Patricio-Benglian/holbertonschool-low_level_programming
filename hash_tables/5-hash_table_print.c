#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	size_t i; /* iterator */
	int comma = 0; /* toggles comma */

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		/* goes through entire linked list */
		while (temp)
		{
			if (comma)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			comma = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
