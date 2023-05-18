#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)

{
	int j, m, n = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (m = 0; av[j][m]; m++)
			l++;
	}
	l += ac;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (m = 0; av[j][m]; m++)
		{
			str[n] = av[j][m];
			n++;
		}
		if (str[n] == '\0')
		{
			str[n++] = '\n';
		}
	}
	return (str);
}
