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
	list_t curNode = *h; /* current node equals head node? */
	int counter = 0; /* Node counter */

	while (curNode.next != NULL) /* until last node */
	{
		if (curNode.str == NULL) /* if string empty */
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", curNode.len, curNode.str);

		curNode = *curNode.next; /* node becomes pointed node */
		counter++;
	}
	/* while loop above does not run last node, do it manually */
	if (curNode.str == NULL) /* if string empty */
		printf("[0] (nil)\n");
	else
		printf("[%i] %s\n", curNode.len, curNode.str);
	counter++;
	return (counter);
}
