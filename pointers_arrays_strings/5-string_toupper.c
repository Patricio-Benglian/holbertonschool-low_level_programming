#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 * string_toupper - converts a string to uppercase
 * @u: string to become uppercase
 * Return: result
 */
char *string_toupper(char *u)
{
	int i, count;

	count = _strlen(u);
	for (i = 0; i < count; i++)
	{
		if (u[i] >= 'a' && u[i] <= 'z')
		{
			u[i] = u[i] - 32;
		}
	}
	return (u);
}
