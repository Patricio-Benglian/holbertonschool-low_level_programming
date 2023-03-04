#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string
 * @accept: prefix characters
 * Return: number of bytes matching prefix
 */
char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; i < _strlen(s); i++)
	{
		for (n = 0; accept[n]; n++)
		{
			if (s[i] == accept[n])
			{
				return (s + i);
			}
			if (s[i + 1] == '\0')
			{
				return (0);
			}
		}
	}
	return ('\0');
}
