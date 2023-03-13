#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * create_array - Entry point
 * @size: the size of the array
 * @c: what character to fill the array with
 * Return: array or 0 on error
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(c) * size);
	if (!arr)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
