#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * aux_char - auxiliary function of main to print characters
 * @list: a copy of va_list from main
 * @arg: the character in question
 */

void aux_char(va_list args, char *separator)
{
	int temp = va_arg(args, int); /* holds value in va_arg */

	printf("%s%c", separator, temp);
}

/**
 * aux_int - auxiliary function of main to print integers
 * @list: a copy of va_list from main
 * @arg: the integer in question
 */

void aux_int(va_list args, char *separator)
{
	int temp = va_arg(args, int); /* holds value in va_arg */

	printf("%s%d", separator, temp);
}

/**
 * aux_float - auxiliary function of main to print floats
 * @list: a copy of va_list from main
 * @arg: the float in question
 */

void aux_float(va_list args, char *separator)
{
	/* float gets upgraded to double idk */
	double temp = va_arg(args, double); /* holds value in va_arg */

	printf("%s%f", separator, temp);
}

/**
 * aux_string - auxiliary function of main to print strings
 * @list: a copy of va_list from main
 * @arg: the string in question to print
 */

void aux_string(va_list args, char *separator) /* maybe they should be not void, and return the value then print it idk */
{
	char *temp = va_arg(args, char *); /* holds value in va_arg */

	if (temp == NULL)
	{
		printf("(nil)");
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
	while (format[i2] && format != NULL)
	{
/* compares value of character in format string with the types for match */
		while (i < 4)
		{
		/* strcmp returns 0 on match. !strcmp returns 1 (true) */
			if (format[i2] == *types[i].type)
			{
			/* runs corresponding aux func */
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
