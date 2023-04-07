#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"
/**
 * add_dnodeint - Adds node at beginning of list
 * @head: pointer to head node
 * @n: value stored in node
 * Return: Always 0 (Success)
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode; /* new Node to add */

	/* allocate memory */
	newNode = malloc(sizeof(dlistint_t));
	/* memory check */
	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}

	/* set data */
	newNode->n = n;

	/* set pointers */
	newNode->next = *head; /* idk why head has to be pointer */
	newNode->prev = NULL; /* since first, nothing before it */

	/* change head if applicable */
	if (*head) /* idk why it has to be pointer */
		(*head)->prev = newNode;

	/* make newNode the new head */
	(*head) = newNode;	/* i think this changes it */
				/* in the argument for future */
				/* calls to the function? */

	return (newNode);
}
