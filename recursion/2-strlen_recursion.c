#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 *
 * Return: Always 0 (Success)
 */
int _strlen_recursion(char *s)
{
	unsigned int i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	i++;
	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		if (*s + 1 == '\0')
		{
			return (i);
		}
	}
	return (i);
}
