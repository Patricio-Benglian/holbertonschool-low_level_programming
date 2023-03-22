#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_iterator - executes a func on each elem of an array
 * @array: the array in question
 * @size: size of the array in question
 * @action: function to be called
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array)
		for (i = 0; i < size; i++)
			action(array[i]);
}
