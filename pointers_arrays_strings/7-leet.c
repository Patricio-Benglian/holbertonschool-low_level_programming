#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 * leet - turns a string into 1337sp34k
 * @l: unleeted string
 * Return: converted string
 */
char *leet(char *l)
{
	char *t = l;
	int i, n;
	char aeotl[] = {65, 69, 79, 84, 76};
	char ctcsu[] = {52, 51, 48, 55, 49};

	for (i = 0; *t; i++)
	{
		for (n = 0; n < 5; n++)
		{
			if (*t == aeotl[n] || *t == aeotl[n] + 32)
			{
				*t = ctcsu[n];
			}
		}
		n = 0;
		t++;
	}
	return (l);
}
