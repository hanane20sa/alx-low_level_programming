#include "main.h"

/**
 * _puts - A function that prints a string
 * @str: string to ptint
 * Return: 0
 */

void _puts(char *str)

{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');

}
