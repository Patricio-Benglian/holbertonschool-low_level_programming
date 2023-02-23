#include <stdio.h>
#include "main.h"
/**
 * print_triangle - prints a triangle of length size
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int h, s, b;

	if (size > 0)
	{
	for (h = 1; h <= size; h++)
	{
		for (s = size; s > h ; s--)
		{
			_putchar(' ');
		}
		for (b = 0; b < h; b++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
	else
	{
	_putchar('\n');
	}
}
