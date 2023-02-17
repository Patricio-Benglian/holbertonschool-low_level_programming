#include "main.h"
/**
 * print_alphabet_x10 - entry
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char alpha;
	int loop;
	
	for (loop = 1; loop <= 10; loop++)
	{
		for (alpha = 'a'; alpha <= 'z' ; alpha++)
		{
			_putchar(alpha);
		}
	_putchar('\n');
	}
}
