#include <stdio.h>
/**
 * main - this function will print text _putchar
 * Return: Always zero
 */
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char ch = 'a';

	while (ch < 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}
