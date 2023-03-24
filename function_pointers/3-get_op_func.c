#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>
/**
 * get_op_func - performs the correct function based on the operator
 * @s: operator that is read
 * Return: pointer to function
 */

int (*get_op_func(char *s))(int, int)
{
	/* array that associates operator with relevant function */
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	/* iterate through array comparing values */
	while (ops[i].op)
	{
		if (!strcmp(s, ops[i].op))
			return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
