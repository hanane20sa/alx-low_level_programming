#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'A programm that prints all single digit numbers of base 10'
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');

	return (0);
}
