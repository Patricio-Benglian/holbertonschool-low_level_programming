#include <stdio.h>
#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string searched through
 * @needle: string searched for
 * Return: pointer to beginning of the located substring or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i, o;

	if (needle == "")
	{
		return (haystack);
	}
	for (i = 0, o = 0; haystack[i]; i++)
	{
		if (needle[o] == haystack[i])
		{
			if (needle[o + 1] == '\0')
			{
				return (haystack + i - o);
			}
			o++;
		}
	}
	return (0);
}
