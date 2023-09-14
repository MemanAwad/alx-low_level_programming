#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print - will print separator
 * @s: char to check if it will print
 * Return: void
 */
void print(char s)
{
	if (s != '\0' &&
	(s == 'c' ||
	s == 'i' ||
	s == 'f' ||
	s == 's'))
	{
		printf(", ");
	}

}
/**
 * print_all - print given variable
 * @format: the format of the variable
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int num;
	char c;
	double d;
	char *str;

	va_start(args, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%d", num);
				break;
			case 'f':
				d = va_arg(args, double);
				printf("%f", d);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
		}
		print(format[i + 1]);
		i++;
	}
	va_end(args);
	printf("\n");
}
