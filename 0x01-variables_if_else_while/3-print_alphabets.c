#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'A programm that prints alphabet in lowercase and in uppercase'
 * Return: always 0
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	char ch = 'A';

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	putchar ('\n');

	return (0);
}
