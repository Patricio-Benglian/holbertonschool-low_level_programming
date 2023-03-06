#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - prints a string folowed by a new line
 * @s: string
 */
void _puts_recursion(char *s)
{
	int i = 0;
	
	while (*s)
	{
		_putchar(s[i]);
		if (s[i + 1] == '\0')
		{
			_putchar('\n');
			return;
		}
		i++;
	}
}
