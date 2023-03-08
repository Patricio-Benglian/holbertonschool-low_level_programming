#include <stdio.h>
/**
 * main - prints amount of arguments
 * @argc: arg count
 * @argv: argument values
 * Return: always 0 on success
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
