#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	char *temp = s, aux;
	int count = 0, i = 0;

	for (; *temp != '\0'; temp++)
	{
		count++;
	}
	for (; i < count / 2; i++)
	{
		aux = s[i];
		s[i] = s[count - i - 1];
		s[count - i - 1] = aux;
	}
}
