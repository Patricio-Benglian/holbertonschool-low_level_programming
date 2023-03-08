#include <stdio.h>
/**
 * main - prints amount of arguments
 * @argc: arg count
 */
int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
