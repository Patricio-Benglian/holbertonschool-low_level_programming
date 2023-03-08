#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument values
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 1; i <= argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
