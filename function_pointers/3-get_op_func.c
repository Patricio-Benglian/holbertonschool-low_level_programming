#include <stdio.h>

/**
 * get_op_func - performs the correct function based on the operator
 * @s: operator that is read
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;


}
