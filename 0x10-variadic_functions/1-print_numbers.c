#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers.
 * @separator: the string separator
 * @n: the number of arguments
 * @...: the integers
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	int j = n;
	va_list ap;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	while (j--)
	printf("%d%s", va_arg(ap, int), j ? (separator ? separator : "") : "\n");
	va_end(ap);
}
