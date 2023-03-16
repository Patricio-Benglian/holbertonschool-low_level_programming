#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees memory allocated for a grid
 * @grid: the grid
 * @height: height of the grid
 * Return: Always 0 (Success)
 */
void free_grid(int **grid, int height)
{
	int i; /* loop iterator */

	/* loops through each row of the grid and deallocates mem */
	for (i = 0; i < height; i++)
	{
		free(a[i]);
	}
	free(a);
}
