#include "main.h"
#include <stdio.h>

/**
 * _isdigit - A function that checks for a digit.
 * @c: The number to be checked.
 * Return: 1 for a digit or 0 for any else
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
