#include <stdio.h>
#include <stdlib.h>

/**
 * main - a programm that adds positive number
 * @argc: tha number of arguments
 * @argv: array of pointers to arguments
 * Return: always 0
 */

int main(int argc, char *argv[])

{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("error\n"), 1);
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
