#include "main.h"
#include <stdio.h>

/**
 * print_line - A function that draws a straight line.
 * @n: the number of time
 * Return: empty
 */

void print_line(int n)

{
	int y;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (y = 0; y < n; y++)
	{
	_putchar(95);
	}
	_putchar('\n');
	}
}
