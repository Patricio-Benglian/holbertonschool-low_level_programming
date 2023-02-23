#include <stdio.h>
#include "main.h"
/**
 * main - prints numbers from 1-100 with fizz and buzz intermittently
 * @i: integer that increments to 100
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (i % 3 != 0 && i % 5 == 0)
		{
			if (i == 100)
			{
				printf("Buzz");
			}
			else
			{
			printf("Buzz ");
			}
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
