#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - prints a diagonal of length n
 * @n: the length of the diagonal
 */
void print_diagonal(int n)
{
	int d, s = 0;

	if (n > 0)
	{
	for (d = 0; d <= (n - 1); d++)
	{
		for (s = 0; s < d; s++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
		s++;
	}
	}
	_putchar('\n');
}
