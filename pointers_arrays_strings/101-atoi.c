#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 * Return: Returns the converted string
 */
int _atoi(char *s)
{
	int newnum = 0, neg = 0, numstart = 0;
		
	if (*s	== '\0')
	{
		return (0);
	}
	else
	{
		while (*s != '\0')
		{
			if (*s == '-')
			{
				if (numstart == 0)
				{
					neg++;
					s++;
				}
				else
				{
					return (newnum);
				}
			}
			if (*s - '0' >= 0 && *s - '0' <= 9)
			{
				numstart = 1;
				newnum = newnum * 10 + (*s - '0');
				s++;
			}
			else
			{
				if (numstart == 1)
				{
					return (newnum);
				}
				if (numstart == 0)
				{
					s++;
				}
			}

		}
	}
	while (neg > 0)
	{
		newnum = newnum * -1;
	}
	return (newnum);
}
