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
	int i;
	/* iterate through array comparing values */
	for (i = 0; i < 5; i++)
		if (s == *ops[i][0])
			return (ops[i].f);
	return(0);

}
