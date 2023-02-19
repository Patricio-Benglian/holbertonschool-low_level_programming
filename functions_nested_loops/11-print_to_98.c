#include "main.h"
/**
 * print_to_98 - prints all numbers from integer n to 98
 * @n: integer of which we are counting towards 98 from
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	_putchar(n);
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar(98);

}
