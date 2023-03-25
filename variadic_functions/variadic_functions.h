#ifndef VARIADIC_H
#define VARIADIC_H

/* includes */
#include <stdarg.h>

/* struct for print_all function */
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
