#include "main.h"
/**
 * print_number - prints hte number n
 * @n: integer
 */
void print_number(int n)
{
	unsigned int num = n;
	unsigned int div = 1;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	while (div < num)
	{
		div = div * 10;
	}
	div = div / 10;
	while (div > 1)
	{
		_putchar((num / div) % 10 + '0');
		div = div / 10;
	}
	_putchar(num % 10 + '0');
}
