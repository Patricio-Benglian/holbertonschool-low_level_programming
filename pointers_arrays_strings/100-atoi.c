#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 * Return: Returns the converted string
 */
int _atoi(char *s)
{
	int neg = 0, newnum2 = 0, i =  1;
	unsigned int newnum = 0;

	while (*s > 57 || *s < 48)
	{
	if (*s == '-')
	{
		neg++;
	}
	s++;
	}
	while(*s - '0' >= 0 && *s - '0' <= 9 && *s != '\0')
	{
		newnum = newnum * 10 + (*s - '0');
		s++;
		i = 0;
	}
	if (neg % 2 == 1)
	{
		newnum2 = newnum * -1;
	}
	else
	{
		newnum2 = newnum;
	}
	if (i == 1)
	{
		return (0);
	}
	return (newnum2);
}
