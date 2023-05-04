#include "main.h"

/**
 * reverse_array - A function that reverse array of integrs
 * @a: array
 * @n: number of elements of array
 * Return: void
 */

void reverse_array(int *a, int n)

{
	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
