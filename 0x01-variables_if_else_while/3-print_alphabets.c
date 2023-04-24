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
	char upper = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);

	putchar ('\n');

	return (0);
}
