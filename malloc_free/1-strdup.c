#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns pointer to a copy of string
 * @str: string
 * Return: Always 0 (Success)
 */
char *_strdup(char *str)
{
	unsigned int i, length;
	char *arr;

	if (!str)
	{
		return (NULL);
	}

	for (length = 0; str[length]; length++)
	{
		;
	}

	arr = malloc(sizeof(str) * length + 1);

	for (i = 0; i < length; i++)
	{
		arr[i] = str[i];
	}

	return (arr);
}
