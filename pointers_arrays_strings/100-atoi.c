#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 * Return: Returns the converted string
 */
int _atoi(char *s)
{
	int newnum = 0, neg = 0;
		
	while (*s > 57 || *s < 48)
	{
		if (*s == '-')
		{
			neg++;
		}
		s++;
	}
	while (*s -'0' >= 0 && *s - '0' <= 9)
	{
		newnum = newnum * 10 + (*s - '0');
		s++;
	}
	if (neg % 2 == 1)
	{
		newnum = newnum * -1;
	}
	return (newnum);
}
