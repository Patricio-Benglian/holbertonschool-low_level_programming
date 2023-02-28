#include <stdio.h>
#include "main.h"
/**
 * _puts2 - prints every other character in a string followed by newline
 * @str: string
 */
void puts2(char *str)
{
	int length = 2;

	while (*str != '\0')
	{
		if (length % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
		length++;
	}
	_putchar('\n');
}
