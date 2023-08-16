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
	long long int sum = 2;
	int i;

	for (i = 0; i < 30; i++)
	{
		x = y;
		y = fib;
		fib = x + y;
		if (fib % 2 == 0)
		{
			sum = sum + fib;
		}
	}
	printf("%lld\n", sum);
}
