#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: integer
 * Return: Square root or -1 if none is found
 */

int root(int n, int i)
{	
	if (n == i * i)
	{
		return i;
	}
	else
	{
		return root(n, i + 1);
	}
}

int _sqrt_recursion(int n)
{
	return root(n, 2);
}
