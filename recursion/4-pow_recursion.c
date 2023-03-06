#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to power of y
 * @x: integer
 * @y: power
 * Return: value of x to power of y or -1 if lower than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
