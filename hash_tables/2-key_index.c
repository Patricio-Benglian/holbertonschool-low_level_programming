#include <stdio.h>
#include "hash_tables.h"
/**
 * key_index - Returns index of a key
 * @key: the key
 * @size: size of array of hash table
 * Return: index at which the key is stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;/* index to return */

	index = hash_djb2(key); /* get hash out of key */
	index %= size;
	/* saving my trash code because i value it */
	/* clear bits up to size bits */
	/* aka size 1024 = 12 bits */
	/* for (mask <<= 63; !(mask & size); mask >>= 1)*/
	/* repeat til reaches size's max bit*/
	/*{*/
	/*	index &= ~(mask);*/
	/*}*/
	return (index);
}
