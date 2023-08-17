#include <stdio.h>

void print_triangle(int);

int main(void)
{
	print_triangle(2);
	print_triangle(10);
	print_triangle(1);
	print_triangle(0);
	return (0);
}
void print_triangle(int size)
{
	if (size == 0 || size < 0)
	{
		putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < size; i++)
		{
			int j;
			int k;

			for (j = i + 1 ; j < size; j++)
			{
				putchar(' ');
			}
			for (k = 0; k <= i; k++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
