#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string in reverse followed by newline
 * @s: string
 */
void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	while (count > 0)
	{
		_putchar(*s);
		count--;
		s--;
	}
	_putchar('\n');
}
