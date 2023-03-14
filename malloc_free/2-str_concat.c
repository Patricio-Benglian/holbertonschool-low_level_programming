#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: Always 0 (Success)
 */
char *str_concat(char *s1, char *s2)
{
	int l, l2, i, i2; /* var to calc s1 and s2 length, incrementors*/
	char *cat; /* concatenated string */

	if (!s1) /* replaces NULL with empty string for concat purposes */
		s1 = "";
	if (!s2) /* same as above */
		s2 = "";

	for (l = 0; s1[l]; l++) /* calc len of s1 */
		;
	for (l2 = 0; s2[l2]; l2++) /* calc len of s2 */
		;

	cat = malloc(sizeof(char) * (l + l2) + 1);
	if (!cat)
		return (NULL);
	for (i = 0; s1[i];) /* copies s1 */
	{	cat[i] = s1[i];
		i++; }
	for (i2 = i, i = 0; s2[i]; i++, i2++) /* copies s2 */

	{	cat[i2] = s2[i]; }
	cat[i2 + 1] = '\0';
	return (cat);
}
