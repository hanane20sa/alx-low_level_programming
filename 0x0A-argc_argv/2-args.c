#include <stdio.h>

/**
 * main - prints all arguments in receives
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])

{
	int l = 0;

	while (argc--)
	{
		printf("%s\n", argv[l]);
		l++;
	}
	return (0);
}
