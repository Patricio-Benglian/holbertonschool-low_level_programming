#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_name - prints a name
 * @name: name to print
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name); /* runs a function with arg name */
	}
}
