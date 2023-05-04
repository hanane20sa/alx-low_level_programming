#include "main.h"
#include <stdio.h>

/**
 * rot13 - A function that encodes rot13
 * @s: pointer to string params
 * Return: *s
 */

char *rot13(char *s)

{
	int l;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwyz";
	char datarot[] = "NOPQRSTUVWXTZABCDEFGHIJKLMnopqrstuvwyzabcdefghijklm";

	for (l = 0; s[l] != '\0'; l++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[l] == data1[j])
			{
				s[l] = datarot[j];
				break;
			}
		}
	}
	return (s);
}
