#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 * Return: pointer to hash table or NULL on error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *arr; /* each section of arr is = hash_table_t */

	arr = malloc(8 * size + sizeof(hash_table_t));
	/* hash table plus amount of pointers to nodes needed */
	if (!arr)
		return (0);

	return (arr);
}
