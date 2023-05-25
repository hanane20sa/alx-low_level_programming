#include "variadic_functions.h"

/**
 * sum_them_all -  a function that returns the sum of all its parameters.
 * @n: the number of arguments
 * @...: the integers
 * Return: the integers sum, 0 if n=0
 */

int sum_them_all(const unsigned int n, ...)

{
	int j = 0, l = n;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	while (l--)
		j += va_arg(ap, int);
	va_end(ap);
	return (j);
}
