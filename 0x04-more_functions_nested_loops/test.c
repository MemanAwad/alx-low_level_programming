#include <stdio.h>

void print_line(int);

int main(void)
{
	print_line(10);
	return (0);
}
void print_line(int n)
{
	if (n == 0 || n < 0)
	{
		putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			int j;

			for (j = 0; j < i; j++)
			{
				putchar(32);
			}
			putchar(92);
			putchar('\n');
		}
	}
}
