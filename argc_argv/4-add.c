#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument values
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i, n, sum = 0;

	if (argc > 1)
	{
	for (i = 1; i < argc; i++)
	{
		for (n = 0; argv[i][n]; n++)
		{
			if (!isdigit(argv[i][n]))
			{
				printf("Error\n");
				return (-1);
			}
		}
		sum += atoi(argv[i]);
	}
	}
	printf("%d\n", sum);
	return (0);
}
