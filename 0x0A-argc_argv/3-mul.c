#include <stdio.h>
#include <stdlib.h>

/**
 * main - a programm that multiplies two number
 * @argc: number of commandline arguments
 * @argv: pointer to an array
 * Return: 0 (success), 1 (error)
 */

int main(int argc, char *argv[])

{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
				printf("%d\n", sum);
	}
	else
	{
	printf("error\n");
	return (1);
	}
	return (0);
}
