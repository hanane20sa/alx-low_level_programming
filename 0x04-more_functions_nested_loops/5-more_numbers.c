#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Make alphabet x10 times.
 * Description: 'Make alphabet x10 times'.
 */

void more_numbers(void)

{
	int n, m;

	for (n = 0; n < 10; n++)
	{
	for (m = 0; m <= 14; m++)
	{
	if (m > 9)
	{
	putchar((m / 10) + '0');
	}
	putchar((m % 10) + '0');
	}
	putchar('\n');
	}
}
