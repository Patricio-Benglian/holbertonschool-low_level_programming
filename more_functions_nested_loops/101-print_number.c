#include "main.h"
#include <limits.h>
/**
 * print_number - prints the number n
 * @n: integer
 */
void print_number(int n)
{
	unsigned int num;
	unsigned int div = 1000000000;
	int TPZ = 0;

	num = n;
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	while (div > 1)
	{
		if ((num / div) % 10 != 0)
		{
			_putchar((num / div) % 10 + '0');
			div = div / 10;
			TPZ = 1;
		}
		else if (div > 9)
		{
			if (TPZ == 1)
			{
				_putchar('0');
				div = div / 10;
			}
			else
			{
			div = div / 10;
			}
		}
	}
	_putchar(num % 10 + '0');
}
