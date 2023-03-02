#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 * cap_string - capitalizes the words of a string
 * @cap: string
 * Return: Capitalized string
 */
char *cap_string(char *cap)
{
	int i, n, count, togcaps = 1;
	char sp[] = {32, 9, 10, 44, 59, 34, 40, 41, 123, 125, 46, 33, 63};

	count = _strlen(cap);
	for (i = 0; i < count; i++)
	{
		if (cap[i] >= 'a' && cap[i] <= 'z' && togcaps == 1)
		{
			cap[i] = cap[i] - 32;
		}
		togcaps = 0;
		for (n = 0; sp[n]; n++)
		{
			if (cap[i] == sp[n])
			{
				togcaps = 1;
			}
		}
	}
	return (cap);
}
