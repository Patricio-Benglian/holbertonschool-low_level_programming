#include "main.h"
/**
 * print_number - prints hte number n
 * does not currently work
 * @n: integer idk
 */
void print_number(int n)
{
	if (n > 999999999)
		_putchar((n / 1000000000) + '0');
	if (n > 99999999)
		_putchar((n / 100000000) + '0');
	if (n > 9999999)
		_putchar((n / 10000000) + '0');
	if (n > 999999)
		_putchar((n / 1000000) + '0');
	if (n > 99999)
		_putchar((n / 100000) + '0');
	if (n > 9999)
		_putchar((n / 10000) + '0');
	if (n > 999)
		_putchar((n / 1000) + '0');
	if (n > 99)
		_putchar((n / 100) + '0');
	if (n > 9)
	{
		_putchar((n / 10) + '0');
	}
	_putchar((n % 10) + '0');
}
