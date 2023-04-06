#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"
/**
 * print_dlistint - Prints all elements of a dlistint_t list
 * @h: pointer to head node
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int counter = 0; /* counts amount of nodes traversed */

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
