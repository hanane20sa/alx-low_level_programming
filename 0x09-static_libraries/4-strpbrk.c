#include "main.h"

/**
 * _strpbrk - A function that searches a string
 * @s: input
 * @accept: input
 * Return: Always 0 (success)
 */

char *_strpbrk(char *s, char *accept)

{
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
		if (*s == accept[r])
			return (s);
		}
		s++;
	}
	return ('\0');
}
