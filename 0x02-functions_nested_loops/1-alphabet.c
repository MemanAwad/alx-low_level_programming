#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - this function will print text _putchar
 * Return: void
 */

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
