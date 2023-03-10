#include <stdio.h>
#include "main.h"
/**
 * root - calculates the root to be returned by sqrt
 * @i: integer
 * @n: integer
 * Return: Square root or -1 if none is found
 */

int root(int n, int i)
{
	if (n == i * i)
	{
		return (i);
	}
	if (i * i < n)
	{
		return (root(n, i + 1));
	}
	else
	{
		return (-1);
	}
}
/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: integer
 * Return: the square root or error
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (root(n, 2));
	}
}
