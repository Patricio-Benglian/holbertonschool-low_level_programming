#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"
/**
 * add_dnodeint_end - Adds node to end of linked list
 * @head: pointer to head node
 * @n: data that goes in new node
 * Return: Address of new node or NULL if failure
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp = *head; /* temp will traverse nodes */

	/* allocate memory */
	newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
	{
		free(newNode);
		return (NULL);
	}
	/* check if list exists */
	if (!*head)
	{
		*head = newNode; /* make head newNode for future adds */
		newNode->prev = NULL;
		newNode->next = NULL;
		return (newNode);
	}

	/* traverse to end of list */
	while (temp->next) /* stop when next node is NULL */
		temp = temp->next;

	/* set data and pointers */
	temp->next = newNode; /* point to new node at end of list */
	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = temp;

	return (*head);
}
