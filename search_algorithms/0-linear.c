#include "search_algos.h"

/**
 * linear_search - searches linearly for value
 * @array: array to search for value in
 * @size: size of array
 * @value: value we are searching for
 */
int linear_search(int *array, size_t size, int value)
{
	int i; /* Iterator */

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}