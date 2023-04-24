#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'A programm that prints the lowercase alphabet in reverse'
 * Return: always 0
 */
int main(void)
{
	char ch = 'z';

	for (ch = 'z'; ch >= 'a'; ch++)
		putchar(ch);
	putchar ('\n');

	return (0);
}
