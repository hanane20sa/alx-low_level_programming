#include "main.h"

/**
 * print_chessboard - A function that prints a chessboard
 * @a: array
 * Return: Always 0 (success)
 */

void print_chessboard(char (*a)[8])

{
	int l;
	int k;

	for (l = 0; l < 8; l++)
	{
		for (k = 0; k < 8; k++)
			_putchar(a[l][k]);
		_putchar('\n');
	}
}
