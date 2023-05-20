#include "main.h"

/**
 * array_range -  a function that creates an array of integers
 * @min: start int
 * @max: max int
 * Return: array of integers
 */

int *array_range(int min, int max)

{
	int length, l;
	int *ptr;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	ptr = malloc(sizeof(int) * length);
	if (ptr == 0)
		return (NULL);
	for (l = 0; l < length; l++)
		ptr[l] = min++;
	return (ptr);
}
