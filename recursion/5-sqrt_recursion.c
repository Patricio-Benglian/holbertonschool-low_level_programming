#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: integer
 * Return: Square root or -1 if none is found
 */
int _sqrt_recursion(int n)
{
	int var = 1;

	if (var * var == n)
	{
		return (var);
	}
	else if (var * var > n)
	{
		return (-1);
	}
	else if (var * var < n)
	{
		var++;
		_sqrt_recursion(n);
	}
	return (0);
}
