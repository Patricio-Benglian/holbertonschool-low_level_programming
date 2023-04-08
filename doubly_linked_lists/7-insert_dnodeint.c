#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at index
 * @h: pointer to head
 * @idx: index
 * @n: data for node
 * Return: Address to new node or NULL if fail
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *temp = *h; /* node to insert */
	unsigned int iterator;

	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);
	newNode->n = n;
	/* if adding to beginning of list */
	if (idx == 0)
	{
		newNode = add_dnodeint(h, n); /* run that command */
		return (newNode);
	}
	/* iterate to index position */
	for (iterator = 1; iterator < idx; iterator++)
		if (temp)
			temp = temp->next;
	/* check if we went outside list */
	if (!temp)
	{
		return (NULL);
	}
	if (!temp->next)
	{
		newNode = add_dnodeint_end(h, n);
		return (newNode);
	}
	/* rearrange pointers */
	newNode->next = temp->next; /* newNode points to next */
	temp->next = newNode; /* previous points to newNode */
	newNode->prev = temp; /* newNode points to prev */
	if (newNode->next) /* if newNode has a next node */
	newNode->next->prev = newNode; /* next points to newNode */
	return (newNode);
}
