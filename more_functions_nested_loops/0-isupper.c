#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c + '0' >= 'A' && <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
