#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"
/**
 * free_dlistint - frees list
 * @head: pointer to head node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node; /* traverses through list */

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
