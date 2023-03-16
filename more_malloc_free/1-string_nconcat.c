#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates first string with N characters of 2nd string
 * @s1: first string
 * @s2: second string
 * @n: amount of characters from second string to concatenate
 * Return: result of concatenation
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l, l2, i, i2; /* var to calc s1 and s2 length, incrementors*/
	char *cat; /* concatenated string */

	if (!s1) /* replaces NULL with empty string for concat purposes */
		s1 = "";
	if (!s2) /* same as above */
		s2 = "";
	for (l = 0; s1[l]; l++) /* calc len of s1 */
		;
	for (l2 = 0; s2[l2]; l2++) /* calc len of s2 */
		;
	/* if n is less than length2, use n for memory allocation*/
	if (n < l2)
		cat = malloc(sizeof(char) * (l + n) + 1);
	else /* allocate memory for entire s2 */
		cat = malloc(sizeof(char) * (l + l2) + 1);
	if (!cat)
		return (NULL);
	for (i = 0; s1[i];) /* copies s1 */
	{	cat[i] = s1[i];
		i++; }
	if (n < l2) /* if n is viable, copy up to n char from s2 */
		for (i2 = i, i = 0; i < n; i++, i2++)
			cat[i2] = s2[i];
	else /* copy entire s2*/
		for (i2 = i, i = 0; s2[i]; i++, i2++)
			cat[i2] = s2[i];
	/* adds null at end of string */
	cat[i2] = '\0';
	return (cat);
}
