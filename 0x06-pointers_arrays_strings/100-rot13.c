#include "main.h"
/**
 * rot13 - cipher text with rot13
 * @ch : the string
 * Return: the ciphered string
 */
char *rot13(char *ch)
{
	char *s1 = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char *s2 = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";
	int i = 0;

	while (ch[i] != '\0')
	{
		int j = 0;

		while (j < 52)
		{
			if (ch[i] == s1[j])
			{
				ch[i] = s2[j];
			}
			j++;
		}
		i++;
	}
	return (ch);
}
