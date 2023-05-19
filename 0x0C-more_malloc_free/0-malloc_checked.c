#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - a function that allocates memory
 * @b: pointer
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)

{
	unsigned int b = malloc(1 * sizeof(int));

	b = 98;

	printf("%d", b);
	return (0);
}
