#include <stdio.h>
#include "main.h"
/**
 * flip_bits - returns number of bits to go from one number to another
 * @n: first number
 * @m: second number
 * Return: differences in bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0; /* counts differences in bits */
	int bitShift; /* shifts bits */

	for (bitShift = 63; bitShift >= 0; bitShift--)
	{
		if (((n >> bitShift) & 1) != ((m >> bitShift) & 1))
			count++;
	}
	return (count);
}
