#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 * Return: changed array with new value for bytes
 */

char *_memset(char *s, char b, unsigned int n)

{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
