#include <stdio.h>
#include "main.h"
/**
 * math - does the calculation for whether n is prime or not
 * @n: integer
 * @p: incrementing integer
 * Return: 1 if prime 0 if not
 */

int math(int n, int p)
{
	if (p == n)
	{
		return (1);
	}
	if (n % p == 0)
	{
		return (0);
	}
	return (math(n, p + 1));

}
/**
 * is_prime_number - returns 0 if number is not prime, 1 otherwise
 * @n: integer
 * Return: 1 if prime 0 else
 */
int is_prime_number(int n)
{
	if (n <= 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	return (math(n, 2));
}
