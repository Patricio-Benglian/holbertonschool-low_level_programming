#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	/* shiftBit shifts bits to the right, getting final bit only */
	/* value holds final bit for comparison */
	/* printToggle only starts printing once nonzero found */
	int shiftBit, value, printToggle = 0;

	/* int stores 32 bits, shift all but last bit, then second last, etc */
	for (shiftBit = 31; shiftBit >= 0; shiftBit--)
	{
		value = n >> shiftBit;

		if (value & 1)
		{
			_putchar('1');
			printToggle = 1;
		}
		else
			if (printToggle == 1)
				_putchar('0');
	}
	/* if nothing ever printed, number is 0, print 0 */
	if (printToggle == 0)
		_putchar('0');
}
