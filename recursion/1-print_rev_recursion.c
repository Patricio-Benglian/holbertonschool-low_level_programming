#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		if (s[1] == '0')
		{
			_putchar('\n');
		}
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
