#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * argstostr - concatenates all program's argument
 * @ac: argument number
 * @av: pointer to string of arguments
 * Return: pointer to string or null
 */
char *argstostr(int ac, char **av)
{
	int len = 0;
	int c;
	char *str;
	int i;
	int l = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < ac; c++)
	{
		len = len + strlen(av[c]);
	}
	str = malloc(sizeof(char) * (len + 1));

	for (i = 0; i < ac; i++)
	{
		int j;

		s = av[i];
		for (j = 0; s[j] != '\0'; j++)
		{
			str[l] = s[j];
			l++;
		}
		s[l] = '\n';
		l++;
	}
	return (str);
}
