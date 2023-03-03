#include <stdio.h>
#include "main.h"
/**
 * print_chessboard - as the name implies
 * @a: chess board matrix
 */
void print_chessboard(char (*a)[8])
{
	int i, n = 0;

	for (i = 0; i < 8; i++)
	{
		for (n = 0; n < 8; n++)
		{
			putchar(a[i][n]);
		}
		putchar('\n');
		n = 0;
	}
}
