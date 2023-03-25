#ifndef VARIADIC_H
#define VARIADIC_H


/* struct for print_all function */
typedef struct printer
{
	char *type;
	int (*p)(list, aux);
} printer_t;

/* prototypes */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
