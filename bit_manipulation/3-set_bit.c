#include <stdio.h>
#include "main.h"
/**
 * set_bit - sets bit at index to 1
 * @n: number whose bit we are setting to 1
 * @index: location at which the 1 is being set
 * Return: 1 success, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	/* if index is bigger than possible position */
	if (index > 64)
		return (-1);
	/* puts 1 in the index position */
	*n |= 1 << index;

	return (1);
}
