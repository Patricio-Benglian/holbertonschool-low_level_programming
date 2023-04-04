#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"
/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to head node
 * Return: The number of nodes
 */
size_t print_list(const list_t *h)
{
	int counter = 0; /* Node counter */

	while (h != NULL) /* until last node */
	{
		if (h->str == NULL) /* if string empty */
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);

		h = h->next; /* node becomes pointed node */
		counter++;
	}
	return (counter);
}
