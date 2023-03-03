#include <stdio.h>
#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to locate
 * Return: pointer to first occurrence OR null
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		if (s[i] == '\0')
		{
			return ('\n');
		}
	}
	return (0);
}
