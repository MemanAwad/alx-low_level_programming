#include <stdio.h>
char *rot13(char *ch)
{
	/*char *s1 = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";*/
	char *s1 = "abc";
	char *s2 = "efg";
	int i = 0;
	int place;

	while (ch[i] != '\0')
	{
		int j = 0;
		do
		{
			place = j;
			j++;
			
		}while (ch[i] != s1[j]);
		ch[i] = s2[j + 1];
		i++;
	}
	return (ch);
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[] = "abh";
		char *p;

		p = rot13(s);
		printf("%s", p);
		return (0);
}
