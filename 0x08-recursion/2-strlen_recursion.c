#include "main.h"

/**
 * _strlen_recursion - A function that returns a length of a string
 * @s: the string to be printed
 * Return: 1
 */

int _strlen_recursion(char *s)

{
	if (*s)

	{
		_strlen_recursion(s + 1);
		_putchar(*s);
	}
	else
	
	return (1);
}
