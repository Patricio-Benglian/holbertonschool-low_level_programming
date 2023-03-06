#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - prints a string folowed by a new line
 * @s: string
 */
void _puts_recursion(char *s)
{
	int i = 1;

	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + i);
		i++;
	}
	else
	{
		_putchar('\n');
	}
}
