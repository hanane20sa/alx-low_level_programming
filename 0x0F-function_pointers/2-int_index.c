#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: the int array
 * @size: the array size
 * @cmp: the compare function
 * Return: index
 */

int int_index(int *array, int size, int (*cmp)(int))

{
	int j = 0;

	if (array && size && cmp)
		while (j < size)
		{
			if (cmp(array[j]))
				return (j);
			j++;
		}
	return (-1);
}
