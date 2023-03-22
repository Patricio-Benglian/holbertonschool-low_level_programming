#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_name - prints a name
 * @name: name to print
 * @f
 */
void print_name(char *name, void (*f)(char *))
{
	if (name)
	{
		f(name);
	}
}
