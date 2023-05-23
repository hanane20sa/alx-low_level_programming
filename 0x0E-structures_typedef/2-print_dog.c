#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: struct dog to print
 */

void print_dog(struct dog *d)

{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
}
