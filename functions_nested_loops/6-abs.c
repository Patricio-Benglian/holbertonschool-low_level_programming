#include "main.h"
/**
 * _abs - computes the absolute value of an int
 * @n:  integer
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}

	return (n);
}
