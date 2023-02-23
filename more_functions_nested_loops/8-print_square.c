#include <stdio.h>
#include "main.h"
/**
 * print_square - prints a square of size size
 * @size: determines the length of the sides of the square
 */
void print_square(int size)
{
	int h, w;

	if (size > 0)
	{
		_putchar('\n');
	}
	else
	{
	for (h = 0; h < size; h++)
	{
		for (w = 0; w < size; w++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
}
