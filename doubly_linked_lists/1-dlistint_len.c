#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"
/**
 * dlistint_len - returns number of elements in dlistint_t list
 * @h: pointer to head node
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0; /* counts nodes */

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
