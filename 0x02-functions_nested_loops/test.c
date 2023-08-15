#include <stdio.h>
#include <ctype.h>
/**
 * main - check the code
 * Return: Always zero
 */
int print_sign(int n);
int main(void)
{
	int c;

	c = print_sign(3);
	putchar(',');
	putchar(' ');
	putchar(c + '0');
	putchar('\n');
	return (0);
}

int print_sign(int n)
{
	int var;
	if (n > 0)
	{
		var = 1;
		putchar(43);
		return (var);
	}
	else if (n == 0)
	{
		var = 0;
		putchar(48);
		return (var);
	}
	else
	{
		var = -1;
		putchar(45);
		return (var);
	}
}
