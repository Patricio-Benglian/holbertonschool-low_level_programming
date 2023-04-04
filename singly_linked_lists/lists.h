#ifndef LIST_H
#define LIST_H
/* Libraries */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* Structures */

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Prototypes */

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
#endif