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
	char *s; /* contains value of string */
	va_list args; /* makes a list of all the arguments */

	/* enables access to variadic func args */
	va_start(args, n); /* n is parameter preceding first var param */

	for (i = 0; i < n; i++) /* iterate n times (once for each arg) */
	{
		s = va_arg(args, char*); /* sets value of s to string */
		/* print string then separator unless its the last number */
		if (i != n - 1 && separator != NULL)
		{
			if (s == NULL) /* if string is null */
				printf("(nil)%s", separator);
			else
				printf("%s%s", s, separator);
		}
		/* print only string if its the last one */
		else
		{
			if (s == NULL) /* if string is null */
				printf("(nil)");
			else
				printf("%s", s);
		}
	}
	printf("\n");
	va_end(args);
}
