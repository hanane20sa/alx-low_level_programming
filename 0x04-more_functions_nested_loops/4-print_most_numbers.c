#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - A function that prints numbers since 0 up to 9.
 * Description: 'Prints numbers excluding 2 and 4'.
 * Return: Always 0
 */

void print_most_numbers(void)

{
	int x = 0;

	for (; x <= 9; x++)
	{
	if (x == 2 || x == 4)
	{
	continue;
	}
	else
	{
	putchar(x + '0');
	}
	}
	putchar('\n');
}


