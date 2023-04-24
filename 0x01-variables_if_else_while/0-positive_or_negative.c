#include <stdio.h>
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
srand(time(0));
n = rand() / 2;
if (n > 0)
{printf("%d is positive\n", n);
}
else if (n == 0)
{printf("%d is zero\n", n);
}
else 
{printf("%d is negative\n", n);
}
return (0);
}
