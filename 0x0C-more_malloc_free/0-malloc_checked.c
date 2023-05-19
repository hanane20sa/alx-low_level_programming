#include "main.h"

/**
 * malloc_checked - a function that allocates memory
 * @b: pointer
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)

{
	int *j = malloc(b);

	if (j == 0)
		exit(98);
	return (j);
}
