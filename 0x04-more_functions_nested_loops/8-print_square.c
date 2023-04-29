#include "main.h"

/**
 * print_square - Prints a square
 * @size: The number of squares/number of times
 * Return: empty
 */

void print_square(int size)

{
	int n, m;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (n = 0; n < size; n++)
	{
	for (m = 0; m < size; m++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
