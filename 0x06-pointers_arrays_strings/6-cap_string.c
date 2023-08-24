#include "main.h"
/**
 *cap_string - capitalize every word in the string
 * @ch : the string
 * Return: camelcase string
 */
char *cap_string(char *ch)
{
	int i = 0;
	char x;

	while (ch[i] != '\0')
	{
		i++;
		if (ch[i - 1] == ',' ||
		ch[i - 1] == ';' ||
		ch[i - 1] == ' ' ||
		ch[i - 1] == '\n' ||
		ch[i - 1] == '\t' ||
		ch[i - 1] == '.' ||
		ch[i - 1] == '!' ||
		ch[i - 1] == '?' ||
		ch[i - 1] == '\"' ||
		ch[i - 1] == '(' ||
		ch[i - 1] == ')' ||
		ch[i - 1] == '{' ||
		ch[i - 1] == '}')
		{
			if ((ch[i] >= 'A' && ch[i] <= 'Z') ||
			!(ch[i] >= 'a' && ch[i] <= 'z'))
			{
				x = ch[i];
			}
			else
			{
				x = ch[i] - 32;
			}
			ch[i] = x;
		}

	}
	return (ch);
}
