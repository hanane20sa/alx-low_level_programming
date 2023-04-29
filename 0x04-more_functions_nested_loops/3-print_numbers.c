#include "main.h"
#include <stdio.h>

/**
 * print_numbers - A functions that prints numbers from 0 to 9.
 * Return: The numbers since 0 uo to 9
 */

void print_numbers(void)

{
	int i;

	for (i = 0; i <= 9; i++)
	{
	_putchar(i + '0');
	}
	_putchar('\n');
}
