#include <stdio.h>
#include "main.h"
/**
 * print_line - prints a line of distance n
 * @n: distance of the line
 */
void print_line(int n)
{
	int d;

	if (n > 0)
	{
	for (d = 1; d <= n; d++)
	{
		_putchar('_');
	}
	}
	_putchar('\n');

}
