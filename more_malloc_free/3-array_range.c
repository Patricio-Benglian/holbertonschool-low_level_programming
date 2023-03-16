#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates array of integers between min and max (inclusive)
 * @min: minimum value of number
 * @max: maximum value of range
 * Return: Pointer to created array
 */
int *array_range(int min, int max)
{
	int *array, i, n; /* arr, loop iterator, n++ from min to max */
	
	if (min > max)
		return (NULL);
	/* allocate memory for array */
	array = malloc(sizeof(int) * (max - min + 1));
	/* mem check */
	if (!array)
		return (NULL);
	/* loop  */
	n = min;
	for (i = 0; n <= max; i++, n++)
		array[i] = n;

	return (array);
}
