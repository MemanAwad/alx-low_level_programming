#include <stdio.h>
#include <ctype.h>
/**
 * main - check the code
 * Return: Always zero
 */
void times_table(void);
int main(void)
{
	times_table();
	putchar('\n');
	return (0);
}

void times_table(void)
{
	int i;
	int zero =0;

	for (i = 0; i < 10; i++)
	{
		int j;
		int var;

		for (j = 0; j < 10; j++)
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
