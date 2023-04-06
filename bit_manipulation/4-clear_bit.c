#include <stdio.h>
#include "main.h"
/**
 * clear_bit - sets bit to 0 at index
 * @n: number to bit set
 * @index: position of bit to switch
 * Return: 1 success, -1 error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* if index is bigger than possible position */
	if (index > 64)
		return (-1);
	/* puts 0 in the index position */
	*n &= ~(1 << index);

	return (1);
}
