#include "main.h"
/**
 * leet - change specific char with specific int
 * @ch : the string
 * Return: string
 */
char *leet(char *ch)
{
	int i = 0;
	int j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	while (ch[i] != '\0')
	{
		j = 0;
		while (s1[j] != '\0')
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
