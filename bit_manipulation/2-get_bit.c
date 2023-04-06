#include <stdio.h>
#include "main.h"
/**
 * get_bit - gets bit at a certain index
 * @n: number
 * @index: index of number in binary
 * Return: Always 0 (Success)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int value;

	if (index > 63)
		return (-1);
	/* shifts bits to index position */
	value = n >> (index);

	return (value & 1);
}
