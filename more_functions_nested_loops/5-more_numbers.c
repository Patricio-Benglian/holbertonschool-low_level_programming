#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints 0-14 ten times
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i;
	int r;

	for (r = 0; r <= 9; r++)
	{
		for (i = 0; i <= 14; i++)
		{
			if ((i / 10) != 0)
			{
				_putchar((i / 10) + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}

}
