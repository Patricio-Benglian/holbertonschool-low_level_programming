#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - prints the sum of hte two diagonals of a square matrix
 * @a: matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, n, sum = 0, sum2 = 0;

	for (i = 0, n = 0; i < size;)
	{
		sum = sum + a[i * size + n];
		i++;
		n++;
	}
	i = 0;
	for (i = 0, n = size - 1; i < size;)
	{
		sum2 = sum2 + a[i * size + n];
		i++;
		n--;
	}
	printf("%d, %d\n", sum, sum2);
}
