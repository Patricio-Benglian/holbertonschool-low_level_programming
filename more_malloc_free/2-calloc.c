#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: amount of elements in array
 * @size: size of each element
 * Return: Always 0 (Success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int i;

	/* if nmemb or size are 0 return NULL */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* allocates memory for nmemb elements of size bytes */
	array = malloc(size * nmemb);

	/* memory check */
	if (!array)
		return (NULL);

	/* sets all values in array to 0 */
	for (i = 0; i < size * nmemb; i++)
		array[i] = 0;

	return (array);
}
