#include <stdio.h>
/**
 * main - A programm that prints the size of various in the computer
 * Return:0 (success)
 */
int main(void)
{
printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(char));
printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(int));
printf("Size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(long int));
printf("Size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(long long int));
printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(float));
return (0);
}
