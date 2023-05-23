#include "search_algos.h"

/**
 * printArr - prints array
 * @array: array to print
 * @low: smallest value of array we are searching in
 * @high: highest value of array we are searching in
 */
void printArr(int *array, size_t low, size_t high)
{
	size_t i;

	printf("Searching in array: ");
	for (i = low; i <= high; i++)
	{
		if (i > low)
			printf(", ");
		printf("%i", array[i]);
	}
	printf("\n");
}
/**
 * binary_search - searches array
 * @array: array to search
 * @size: size of array
 * @value: value looking for
 * Return: index of value found or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t mid = 0;
	size_t high = size - 1;

	if (!array)
		return (-1);

	while (low <= high)
	{
		printArr(array, low, high);
		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
