#include <stdio.h>
#include "main.h"
/**
 * cmp - compares each character in the string
 * @o: string One
 * *t: string Two
 * *i: increments through string
 * Return: Always 1 if equal 0 if not
 */
int cmp(char *o, char *t, int i)
{
	if (o[i] == '\0' && t[i] == '\0')
	{
		return (1);
	}
	if (o[i] == t[i] || o[i] == '*' || t[i] == '*')
	{
		return (cmp(o, t, i + 1));
	}
	return (0);

}
/**
 * wildcmp - checks whether two strings are the same where * are wildcards
 * Return: 1 if equal 0 if not
 */
int wildcmp(char *s1, char *s2)
{
	return (cmp(s1, s2, 0));
}
