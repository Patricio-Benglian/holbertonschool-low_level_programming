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

	if (s1 == NULL && s2 == NULL) /* if both empty return NULL */
		return (NULL);
	for (l = 0; s1[l]; l++) /* calc len of s1 */
		;
	for (l2 = 0; s2[l2]; l2++) /* calc len of s2 */
		;
	if (!s1) /* only copies s2 if s1 is empty */
	{
		cat = malloc(sizeof(char) * l2 + 1);
		if (!cat) /* check malloc return */
			return (NULL);
		for (i = 0; s2[i];)
		{	cat[i] = s2[i];
			i++; }
		cat[i] = '\0';
		return (cat); }
	else if (!s2) /* only copies s1 if s2 is empty */
	{
		cat = malloc(sizeof(char) * l + 1);
		if (!cat)
			return (NULL);
		for (i = 0; s1[i];)
		{	cat[i] = s1[i];
			i++; }
		cat[i] = '\0';
		return (cat); }
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
