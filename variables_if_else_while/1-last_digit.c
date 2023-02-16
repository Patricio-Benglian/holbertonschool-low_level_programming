#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 < 6) 
	{
		printf("The last digit of %i is less than 6 and not 0", n);
	}
	else if (n % 10 > 5)
	{
		printf("The last digit of %i is greater than 5", n);
	}
	else
	{
		printf("The last digit of %i is 0");
	}
	return (0);
}
