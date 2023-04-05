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
 * add_node_end - adds node to end of list
 * @head: pointer to header node
 * @str: string for node
 * Return: Always 0 (Success)
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *buffer = *head;

	newNode = malloc(sizeof(list_t));
	
	if (!newNode)
		return (NULL);
	if (!str)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = _strlen(str);
	newNode->next = NULL;

	if (!*head) /* if no nodes, newnode is head */
	{
		*head = newNode;
		return (newNode);
	}

	while (buffer->next != NULL)
		buffer = buffer->next;

	buffer->next = newNode;

	return (newNode);
}
