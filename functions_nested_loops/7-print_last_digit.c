#include "main.h"
/**
 * print_last_digit - does as the name says
 * @n: integer we will find the last digit of
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n >= 0)
	{
		_putchar(n + '0');
		return (n);
	}
	else
	{
		n = n * -1;
		_putchar(n + '0');
		return (n);
	}
}
