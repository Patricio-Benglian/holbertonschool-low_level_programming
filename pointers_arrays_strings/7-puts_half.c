#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints second half of a string rounded down
 * @str: string
 */
void puts_half(char *str)
{
	int length = 0;

	while (*str != '\0')
	{
		length++;
		str++;
	}
	length = length / 2;
	for (; length > length / 2; length--)
	{
		str--;
	}
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
