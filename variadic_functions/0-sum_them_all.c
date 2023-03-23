#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"
/**
 * sum_them_all - sums all arguments together
 * @n: amount of arguments input
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0; /* sum of all args */
	unsigned int i; /* iterator, unsigned to match n */
	va_list args; /* makes list of all arguments */

	if (n == 0) /* if no arguments then nothing */
		return (0);

	va_start(args, n); /* enables access to variadic func args */

	for (i = 0; i < n; i++) /* iterate n times (once for each arg) */
		/* va_arg accesses next argument when called.*/
		sum += va_arg(args, int); /* ,int declares the vartype of arg */

	return (sum);
}
