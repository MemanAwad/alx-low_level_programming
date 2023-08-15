#include <stdio.h>
/**
 * main - check the code
 * Return: Always zero
 */
void print_alphabet_x10(void);
int main(void)
{
	print_alphabet_x10();
	return (0);
}
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char ch = 'a';
		while (ch <= 'z')
		{
			putchar(ch);
			ch++;
		}
		putchar('\n');
	}
}
