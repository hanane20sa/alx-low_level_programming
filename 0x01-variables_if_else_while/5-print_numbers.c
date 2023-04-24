#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'prints all digit numbers of base 10'
 * Return: always 0
 */
int main(void)
{
	char ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
