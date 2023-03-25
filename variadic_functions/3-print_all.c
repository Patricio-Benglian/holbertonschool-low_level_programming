#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of characters corresponding to vartype of respective arg list
 */

void print_all(const char * const format, ...)
{
	void (*func)(char *list); /* points to relevant aux_func */
	va_list args; /* makes list of all args */
	printer_t types[] = {
		{"c", aux_char},
		{"i", aux_int},
		{"f", aux_float},
		{"s", aux_string},
		{NULL, NULL},
	};
	int i = 0;

	while (format)
	{
/* compares value of character in format string with the types for match */
		while (types[i].type)
		{
		/* strcmp returns 0 on match. !strcmp returns 1 (true) */
			if (!strcmp(format, types[i].type))
			{
			/* runs corresponding aux func */
				 types[i].p(va_copy(list, args));
			}
		}
		i++;
		format++;
	}
}

/**
 * aux_char - auxiliary function of main to print characters
 * @list: a copy of va_list from main
 * @arg: the character in question
 */

void aux_char(char *list)
{
	char temp = va_arg(list, char); /* holds value in va_arg */

	printf("%c", temp);
}

/**
 * aux_int - auxiliary function of main to print integers
 * @list: a copy of va_list from main
 * @arg: the integer in question
 */

void aux_int(char *list)
{
	int temp = va_arg(list, int); /* holds value in va_arg */

	printf("%d", temp);
}

/**
 * aux_float - auxiliary function of main to print floats
 * @list: a copy of va_list from main
 * @arg: the float in question
 */

void aux_float(char *list)
{
	float temp = va_arg(list, float); /* holds value in va_arg */

	printf("%f", temp);
}

/**
 * aux_string - auxiliary function of main to print strings
 * @list: a copy of va_list from main
 * @arg: the string in question to print
 */

void aux_string(char *list) /* maybe they should be not void, and return the value then print it idk */
{
	char *temp = va_arg(list, char *); /* holds value in va_arg */

	if (temp == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", temp);
}
