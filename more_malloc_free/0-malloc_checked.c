#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked(unsigned int b) - allocates memory
 * @b: amount of memory allocated
 * Return: Always 0 (Success)
 */
void *malloc_checked(unsigned int b)
{
	int *pt2mem; /* pointer to memory */
	/* allocates amount of memory equal to b */
	pt2mem = malloc(b);

	return (pt2mem);
}
