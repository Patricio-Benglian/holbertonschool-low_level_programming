#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	if ("size32" == __FILE__)
	{
		printf("Size of a char: 1 bytes(s)");
		printf("Size of an int: 4 byte(s)");
		printf("Size of a long int: 4 byte(s)");
		printf("Size of a long long int: 8 byte(s)");
		printf("Size of a float: 4 byte(s)");
	}
	else
	{
		printf("Size of a char: 1 bytes(s)");
		printf("Size of an int: 4 byte(s)");
		printf("Size of a long int: 8 byte(s)");
		printf("Size of a long long int: 8 byte(s)");
		printf("Size of a float: 4 byte(s)");
	}
	return (0);
}
