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
	int **array, i;

	if (width < 1 || height < 1) /* if dimensions are 0 return NULL */
		return (NULL);
	*array = malloc(sizeof(int) * height); /* allo mem for first dimension */
	if (!array) /* mem check */
		return (NULL);
	for (i = 0; i < height; i++) /* allo mem for second dimension */
	{
		array[i] = malloc(sizeof(int) * width);
		if (!array[i]) /* mem check */
			return (NULL);
	}
	/* set all values in array to 0 */
	return (array);
}
