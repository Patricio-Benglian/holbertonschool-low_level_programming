#include <stdio.h>

/**
 * get_op_func - performs the correct function based on the operator
 * @s: operator that is read
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
	while (ops)
	{
		if (s = ops[i])
			return (ops[i][1]);
		i++;
	}
	printf("Error\n");
	exit(99);
}
