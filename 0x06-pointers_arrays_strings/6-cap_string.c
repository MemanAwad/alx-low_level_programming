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
		if (ch[i] == ',' ||
		ch[i] == ';' ||
		ch[i] == ' ' ||
		ch[i] == '\n' ||
		ch[i] == '\t' ||
		ch[i] == '.' ||
		ch[i] == '!' ||
		ch[i] == '?' ||
		ch[i] == '\"' ||
		ch[i] == '(' ||
		ch[i] == ')' ||
		ch[i] == '{' ||
		ch[i] == '}')
		{
			if ((ch[i + 1] >= 'A' && ch[i + 1] <= 'Z') ||
			!(ch[i + 1] >= 'a' && ch[i + 1] <= 'z'))
			{
				x = ch[i + 1];
			}
			else
			{
				x = ch[i + 1] - 32;
			}
			ch[i + 1] = x;
		}

		i++;
	}
	return (ch);
}
