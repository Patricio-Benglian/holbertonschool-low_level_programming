#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"


/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: returns count
 */
int _strlen(const char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	return (count);
}

/**
 * add_node - Adds node to beginning of list_t list
 * @head: head node
 * @str: string that goes in node
 * Return: address of new element or NULL if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode; /* new node to add */

	if (!head || !str)
		return (NULL);
	newNode = malloc(sizeof(list_t)); /* allocate mem for it */
	if (!newNode) /* memory check */
	{
		free (newNode);
		return (0);
	}
	newNode->str = strdup(str);
	newNode->len = _strlen(str);
	newNode->next = *head;
	*head = newNode;
	return (*head);
}
