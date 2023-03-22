#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * int_index - searches for an integer
 * @array: the array in which the search is done
 * @size: the size of the array which is searched in
 * @cmp: function that compares the values of the integers
 * Return: -1 on error, else returns the integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp != NULL)
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	return (-1);
}
