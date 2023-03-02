#include <stdio.h>
#include "main.h"
/**
 * reverse_array - reverses the contents of an array
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int aux;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		aux = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = aux;
	}
}
