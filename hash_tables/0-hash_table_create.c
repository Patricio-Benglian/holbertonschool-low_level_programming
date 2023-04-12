#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to hash table or NULL on error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *arr;
	size_t i;

	/* size of hash table + amount of pointers to nodes needed */
	arr = malloc(sizeof(hash_table_t));
	if (!arr)
		return (NULL);
	arr->size = size;
	for (i = 0; i < size; i++)
		arr->array = malloc(8);

	return (arr);
}
