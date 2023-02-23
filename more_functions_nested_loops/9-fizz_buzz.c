#include <stdio.h>
#include "main.h"
/**
 * fizzbuzz - prints numbers from 1-100 with fizz and buzz intermittently
 * @i: integer that increments to 100
 */
void fizzbuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 != 0 || i % 5 != 0)
		{
			printf("%d ", i);
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("Buzz ");
		}
	}
	printf("\n");
}
