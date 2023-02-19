#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all numbers from integer n to 98
 * @n: integer of which we are counting towards 98 from
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	printf("n");
	if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("98");

}
