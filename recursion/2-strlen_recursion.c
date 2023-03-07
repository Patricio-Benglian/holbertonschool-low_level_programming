#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	/* Returns 0 when it reaches null then adds 1 for each time it recursed */
	return (_strlen_recursion(s + 1) + 1);
}
