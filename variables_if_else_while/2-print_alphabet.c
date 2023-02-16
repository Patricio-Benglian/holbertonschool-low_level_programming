#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;
	for (alpha = 'a'; alpha < 'A'; alpha++)	
	{
		putchar("%c", alpha);
	}
	return (0);
}
