#ifndef VARIADIC_H
#define VARIADIC_H

/* includes */
#include <stdarg.h>

/**
 * struct prints - struct for printing all var types
 * @type: array that associates a vartype with a respective print function
 * @p: function pointer that points to corresponding vartype print function
 */

typedef struct prints
{
	char *type;
	void (*p)(va_list args, char *separator);
} printer_t;

/* prototypes */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
