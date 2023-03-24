#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - main function for calculator
 * @argc: argument count
 * @argv: argument values
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int (*math)(int a, int b);

	/* if there arent 4 args then the command was run incorrectly, error */
	if (argc == 4)
	{
		/* run get_op_func to parse argv 2 */
		math = get_op_func(argv[2]);
		printf("%d\n", math(atoi(argv[1]), atoi(argv[3])));
		return (0);
	}
	printf("Error\n");
	exit(98);
}
