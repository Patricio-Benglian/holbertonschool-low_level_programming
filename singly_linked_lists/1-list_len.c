#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"
/**
 * list_len - Returns length of list
 * @h: pointer to head node
 * Return: Length of list
 */
size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
