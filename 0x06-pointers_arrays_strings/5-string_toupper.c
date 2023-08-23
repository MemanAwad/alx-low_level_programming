#include "main.h"
/**
 * string_toupper - change the lowercase to uppercase
 * @ch : the string
 * Return: upper case string
 */
char *string_toupper(char *ch)
{
	int i = 0;
	char x;

	while (ch[i] != '\0')
	{
		if ((ch[i] >= 'A' && ch[i] <= 'Z') || !(ch[i] >= 'a' && ch[i] <= 'z'))
		{
			x = ch[i];
		}
		else
		{
			x = ch[i] - 32;
		}
		ch[i] = x;
		i++;
	}
	return (ch);
}
