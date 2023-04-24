#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Description: 'check numbers if it's positive or negative'
 *Return: alwys 0 (success)
*/

int main(void)
{
	int n;

	n = rand() - RAND_MAX / 2;
	/*your code goes there*/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
