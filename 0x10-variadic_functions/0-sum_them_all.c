#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - it will return the sum of given integers
 * @n: number of integers
 * Return: int value of sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	return (sum);
}
