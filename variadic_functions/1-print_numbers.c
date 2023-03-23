#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers recieved as arg
 * @separator: string printed between numbers
 * @n: integers passed to function
 * Return: Always 0 (Success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i; /* iterator */
	va_list args; /* makes a list of all the arguments */

	/* if no separator, quit */
	if (separator == NULL)
		exit(0);
	/* enables access to variadic func args */
	va_start(args, n); /* n is parameter preceding first var param */

	for (i = 0; i < n; i++) /* iterate n times (once ofr each arg) */
	{
		if (i != n - 1)
			printf("%d%s", va_arg(args, int), separator);
		if (i == n - 1)
			printf("%d", va_arg(args, int));
	}
	printf("\n");
}
