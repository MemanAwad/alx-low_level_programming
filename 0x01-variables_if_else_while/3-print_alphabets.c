#include <stdio.h>

/**
 * main - this function will print letter in lower case
 * Return: this function will return 0 to end the program
 */
	int main(void)
	{
		char ch = 'a';
		char CH = 'A';

		while (ch <= 'z')
		{
			printf("%c", ch);
			ch++;
		}
		while (CH <= 'Z')
		{
			printf("%c", CH);
			CH++;
		}
		printf("\n");
		return (0);
	}
