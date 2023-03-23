#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings with separators between
 * @separator: separator between strings
 * @n: amount of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i; /* iterator */
	va_list args; /* makes a list of all the arguments */

	/* enables access to variadic func args */
	va_start(args, n); /* n is parameter preceding first var param */

	for (i = 0; i < n; i++) /* iterate n times (once for each arg) */
	{
		/* print string then separator unless its the last number */
		if (i != n - 1 && separator != NULL)
		{
			printf("%s%s", va_arg(args, char*), separator);
		}
		/* print only string if its the last one */
		else
			printf("%s", va_arg(args, char*));
	}
	printf("\n");
}
