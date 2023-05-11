#include "main.h"

/**
 * _puts_recursion - A function that prints a string
 * @s: the string that will printed
 */

void _puts_recursion(char *s)

{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}

