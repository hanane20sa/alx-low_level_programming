#include "main.h"
#include <stdio.h>

/**
 *_isupper - 'A function that checks for uppercase character'.
 *@c: The character to be checked.
 *Return: 1 for uppercase or 0 for anyrhing else
 */

int _isupper(int c)

{
	if (c >= 65 && c <= 90)
	{
	return (1);
	}

	return (0);
}
