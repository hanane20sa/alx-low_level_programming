#include "main.h"

/**
 * _pow_recursion - A function returns the value of x
 * @x: value of raise
 * @y: power
 * Return: result of power
 */

int _pow_recursion(int x, int y)

{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
