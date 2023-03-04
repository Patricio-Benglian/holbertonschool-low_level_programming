#include <stdio.h>
#include "main.h"
/**
 * _strspn - prints length of a prefix substring
 * @s: string
 * @accept: prefix characters
 * Return: number of bytes matching prefix
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, num = 0;

	for (i = 0, n = 0; *accept;)
	{
		if (accept[n] == s[i])
		{
			num++;
			i++;
			n = 0;
		}
		else if (accept[n + 1] == '\0')
		{
			return (num);
		}
		else
		{
			n++;
		}
	}
	return (num);
}
