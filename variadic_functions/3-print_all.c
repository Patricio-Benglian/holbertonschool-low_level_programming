#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * aux_char - auxiliary function of main to print characters
 * @args: list of args
 * @separator: separator between values
 */
void aux_char(va_list args, char *separator)
{
	int temp = va_arg(args, int); /* holds value in va_arg */

	printf("%s%c", separator, temp);
}
/**
 * aux_int - auxiliary function of main to print integers
 * @args: list of args
 * @separator: separator between values
 */
void aux_int(va_list args, char *separator)
{
	int temp = va_arg(args, int); /* holds value in va_arg */

	printf("%s%d", separator, temp);
}
/**
 * aux_float - auxiliary function of main to print floats
 * @args: list of args
 * @separator: separator between values
 */
void aux_float(va_list args, char *separator)
{
	double temp = va_arg(args, double); /* holds value in va_arg */

	printf("%s%f", separator, temp);
}

/**
 * aux_string - auxiliary function of main to print strings
 * @args: list of args
 * @separator: separator betwixt values:
 */

void aux_string(va_list args, char *separator)
{
	char *temp = va_arg(args, char *); /* holds value in va_arg */

	if (temp == NULL)
	{
		printf("%s(nil)", separator);
		return;
	}
	printf("%s%s", separator, temp);
}
/**
 * print_all - prints anything
 * @format: list of characters corresponding to vartype of respective arg list
 */
void print_all(const char * const format, ...)
{
	va_list args; /* makes list of all args */
	printer_t types[] = {
		{"c", aux_char},
		{"i", aux_int},
		{"f", aux_float},
		{"s", aux_string},
		{NULL, NULL},
	};
	int i = 0, i2 = 0;
	char *separator = "";

	va_start(args, format);
	while (format != NULL && format[i2])
	{
		while (i < 4)
		{
			if (format[i2] == *types[i].type)
			{
				types[i].p(args, separator);
				separator = ", ";
			}
			i++;
		}
		i = 0;
		i2++;
	}
	printf("\n");
	va_end(args);
}
