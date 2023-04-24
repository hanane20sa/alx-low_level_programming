#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'A programm that prints alphabet in lowercase'
 * Return: always 0
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar ('\n');

	return (0);
}
