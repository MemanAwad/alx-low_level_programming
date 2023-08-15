#include <stdio.h>
#include <ctype.h>
/**
 * main - check the code
 * Return: Always zero
 */
void print_to_98(int n);
int main(void)
{
	print_to_98(80);
	putchar('\n');
	return (0);
}

void print_to_98(int n)
{
	if (n < 98)
	{
		int i;
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
		putchar(' ');
	}
	else 
	{
		int i;
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
