#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "3-calc.h"

/**
 * main - main function for calculator
 *
 * Return: Always 0 (Success)
 */
int main(argc, **argv)
{
	int math(int a, int b);

	/* if there arent 4 args then the command was run incorrectly, error */
	if (argc != 4)
	{	printf("Error\n");
		exit(98);
	}
	/* run get_op_func to parse argv 2 */
	get_op_func(argv[2])
}
