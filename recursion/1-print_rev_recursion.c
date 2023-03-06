#include <stdio.h>
#include "main.h"
#include "2-strlen.c"
/**
 * _print_rev_recursion - Prints a string in reverse
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_putchar(_print_rev_recursion(s));
	s--;
}
