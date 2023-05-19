#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of s2
 * Return: 0 (success), NULL fail
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *str;
	unsigned int l, m, s1_length, s2_length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_length = 0; s1[s1_length] != '\0'; s1_length++)
		;
	for (s2_length = 0; s2[s2_length] != '\0'; s2_length++)
		;

	str = malloc(s1_length + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (l = 0; s1[l] != '\0'; l++)
	{
		str[l] = s1[l];
	}
	for (m = 0; m < n; m++)
	{
		str[l] = s2[m];
		l++;
	}
	str[l] = '\0';
	return (str);
}

