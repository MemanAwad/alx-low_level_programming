#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers followed by new line
 * @separator: it separate between numbers
 * @n: number of integers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int num;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		if (separator == NULL)
		{
			printf("%d", num);
		}
		if (i < n - 1 && separator != NULL)
		{
			printf("%d%s", num, separator);
		}
		if (i == n - 1 && separator != NULL)
		{
			printf("%d", num);
		}
	}
	printf("\n");
}
