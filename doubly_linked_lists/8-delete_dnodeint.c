#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes node at index
 * @head: pointer to head node
 * @index: position of node to delete
 * Return: Always 1 if succeed, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp; /* holds value of head */
	unsigned int i; /* iterator */

	/* make sure list exists */
	if (*head == NULL) /* doesnt work, keeps running til index 0 freehead */
		return (-1);
	/* case if only node */
	/* free memory then change head to NOTHING */
	if (index == 0)
	{
		if ((*head)->next)
		{
			temp = *head;
			free(temp);
			*head = (*head)->next; /* check */
			(*head)->prev = NULL;
			return (1);
		}
		free(*head);
		*head = NULL;
		return (1);
	}
	temp = *head;

	for (i = 0; i < index && temp; i++)
	{
			temp = temp->next;
	}
	/* if index goes beyond list */
	if (i != index)
		return (-1);
	/* case if last node */
	if (!temp->next)
	{
		temp->prev->next = NULL; /* stop pointing to last node */
		free(temp);
		return (1);
	}
	/* makes nodes before and after point to each other */
	/* instead of node in middle to be deleted */
	if (*head != NULL)
		{
		temp->prev->next = temp->next;
		temp->next->prev = temp->prev;
		free(temp);
		return (1);
		}
	return (-1);
}
