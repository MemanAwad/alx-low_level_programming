#include <stdio.h>

void print_diagonal(int);

int main(void)
{
	print_diagonal(0);
	print_diagonal(2);
	print_diagonal(10);
	print_diagonal(-4);
	return (0);
}
void print_diagonal(int n)
{
	if (n == 0 || n < 0)
	{
		putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			int j;
			if (i != 0)
			{
				for (j = 0; j < i; j++)
				{
					putchar(' ');
				}
			}
			putchar('\\');
			putchar('\n');
		}
	}
}
