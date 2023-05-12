#include <stdio.h>

/**
 * main - print number of arguments
 * @argc: number of commandline arguments
 * @argv: pointer to an array
 * Return: 0 (success), non 0 fail.
 */

int main(int argc, char *argv[] __attribute__((unused)))

{
	printf("%d\n", argc - 1);
	return (0);
}
