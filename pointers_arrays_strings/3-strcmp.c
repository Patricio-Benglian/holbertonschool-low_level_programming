#include <stdio.h>
#include "main.h"
/**
 * _strcmp - compares string
 * @s1: first string
 * @s2: second string
 * Return: Returns difference between strings
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
			s1++;
			s2++;
			if (*s1 == '\0')
			{
				return (0);
			}
	}
	return ((*s1 + '0')- (*s2 + '0'));
}
