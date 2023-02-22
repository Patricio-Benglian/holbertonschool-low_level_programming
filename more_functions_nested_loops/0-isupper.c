#include "main.h"

/**
 * _isupper - returns 1 if int c is an uppercase letter
 * @c: variable
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
