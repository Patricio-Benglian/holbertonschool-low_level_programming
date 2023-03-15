#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of int
 * @width: columns
 * @height: rows
 * Return: Always 0 (Success)
 */
int **alloc_grid(int width, int height)
{
	int **array, i, i2; /* array, iterators */

	if (width < 1 || height < 1) /* if dimensions are 0 return NULL */
		return (NULL);

	/* allocate memory for first dimension of array */
	array = malloc(sizeof(int *) * height);

	if (!array)
		return (NULL);

	/* allocate memory for second dimension of array */
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(sizeof(int) * width);
		/* another mem check */
		if (!array[i])
		{
			for (i2 = 0; i2 < i ; i2++)
			{
				free(array[i2]);
			}
			free(array);
			return (NULL);
		}
	}

	/* set all values in array to 0 */
	for (i = 0; i < height; i++)
		for (i2 = 0; i2 < width; i2++)
			array[i][i2] = 0;

	return (array);
}
