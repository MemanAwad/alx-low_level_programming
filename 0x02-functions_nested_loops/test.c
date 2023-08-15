#include <stdio.h>
#include <ctype.h>
/**
 * main - check the code
 * Return: Always zero
 */
int _islower(int c);
int main(void)
{
	int r;

	r = _islower('H');
	putchar(r + '0');
	putchar('\n');
	return (0);
}
int _islower(int c)
{
	int var = c;

	return (islower(var));
}
