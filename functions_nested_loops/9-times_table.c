#include "main.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int row, clm, prod;

	for (row = 0; row <= 9; row++)
	{
		for (clm = 0; clm <= 9; clm++)
		{
			prod = (clm * row);
			if (prod > 9)
			{
				if (clm != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
			else
			{
				if (clm != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(prod + '0');
			}
		}
		if (row != 10)
		{
			_putchar('\n');
		}
	}
}
