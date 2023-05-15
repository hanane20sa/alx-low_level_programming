#include "main.h"

/**
 * _strspn - A function that gets a lenght of a prefix substring
 * @s: input
 * @accept: input
 * Return: Always 0 (success)
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int m = 0;
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				m++;
				break;
			}
			else if (accept[j + 1] == '\0')
				return (m);
		}
		s++;
	}
	return (m);
}
