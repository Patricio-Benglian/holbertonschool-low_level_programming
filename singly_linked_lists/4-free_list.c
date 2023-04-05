#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "lists.h"
/**
 * free_list - frees a list
 * @head: pointer to head node
 */
void free_list(list_t *head)
{
	list_t *pNode;

	while (head)
	{
		pNode = head;
		head = head->next;
		free(pNode->str);
		free(pNode);
	}
}
