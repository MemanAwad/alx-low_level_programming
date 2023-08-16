#include <stdio.h>
#include "main.h"
/**
 * main - this function will call fibonacci function
 * Return: always zero
 */
void fibonacci(void);
int main(void)
{
	fibonacci();
	return (0);
}
/**
 * fibonacci - it will print the first 50 numbers of febonacci sequense
 * Return: void
 */
void fibonacci(void)
{
	long int x = 1;
	long int y = 2;
	long int fib = x + y;
	long int i;

	printf("%ld, %ld", x, y);
	for (i = 0; i < 48; i++)
	{
		printf(", %ld", fib);
		x = y;
		y = fib;
		fib = x + y;
	}
	printf("\n");
}
