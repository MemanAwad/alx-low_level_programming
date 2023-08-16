#include <stdio.h>
#include <ctype.h>
/**
 * main - check the code
 * Return: Always zero
 */
void times_table(int);
int main(void)
{
	times_table(3);
	putchar('\n');
	return (0);
}

void times_table(int num)
{
	int i;

	for (i = 0; i <= num; i++)
	{
		int j;
		int var;

		for (j = 0; j <= num; j++)
		{
			if (i == 0)
			{
				if (j == 0)
				{
					printf("%d", i);
				}
				else
				{
					printf(",  %d", i);
				}
			}
			else if (j == 0)
			{
				printf("%d", j);
			}
			else
			{
				var = i * j;
				if (var < 10)
				{
						printf(",  %d", var );
				}
				else
				{
						printf(", %d", var );
				}
			}
		}
		if (i == 9)
			break;
		printf("\n");
	}
}
