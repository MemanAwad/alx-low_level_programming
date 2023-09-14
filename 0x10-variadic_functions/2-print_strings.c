#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_strings - print strings followed by new line
 * @separator: it separate between numbers
 * @n: number of strings
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int i;
	size_t j;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			if (separator == NULL)
			{
				for (j = 0; j < strlen(str); j++)
				{
					printf("%c", str[j]);
				}
			}
			if (i < n - 1 && separator != NULL)
			{
				for (j = 0; j < strlen(str); j++)
				{
					printf("%c", str[j]);
				}
				printf("%s", separator);
			}
			if (i == n - 1 && separator != NULL)
			{
				for (j = 0; j < strlen(str); j++)
				{
					printf("%c", str[j]);
				}
			}
		}
	}
	printf("\n");
}
