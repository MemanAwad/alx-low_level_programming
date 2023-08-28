#include "main.h"
/**
 * rot13 - cipher text with rot13
 * @ch : the string
 * Return: the ciphered string
 */
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

		while (ch[i] != s1[j])
		{
			j++;
			place =j;
			
		}
		ch[i] = s2[j];
		i++;
	}
	return (ch);
}
