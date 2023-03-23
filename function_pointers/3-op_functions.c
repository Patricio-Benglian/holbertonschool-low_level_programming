#include <stdio.h>

/**
 * op_add - adds int a and int b
 * @a: first integer
 * @b: second integer
 */

int op_add (int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts b from a
 * @a: integer
 * qb: integer
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies a and b
 * @a: integer
 * @b: integer
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a by b
 * @a: dividend
 * @b: divisor
 */
int op_div(int a, int b)
{
	if (b == 0)
        {	
		printf("Error");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - returns remainder of a div b
 * @a: dividend
 * @b: divisor
 */

int op_mod(int a, int b);
{
	if (b == 0)
	{	
		printf("Error");
		exit(100);
	}
	return (a % b);
}
