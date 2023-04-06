#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: points to a string of 0 and 1s
 * Return: Converted number or 0 error
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, i = 0; /* number, iterator */

	/* if b doesnt exist, error */
	if (!b)
		return (0);

	while (b[i] == '0' || b[i] == '1')
	{
		num <<= 1; /* add another digit */
		num += b[i] - '0'; /* add value to new digit */
		i++;
	}
	/* if it ended because it found NULL */
	if (!b[i])
		return (num);
	/* if it left the loop and is not NULL; nonbinary character was found */
	return (0);
}
