#include "main.h"
/**
 * _strcmp - This function will compare two strings
 * @s1 : the first string
 * @s2 : the second string
 * Return: integer value
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int result;

	while (s1[i] != '\0')
	{
		result = s1[i] - s2[i];
		if (result != 0)
		{
			break;
		}
		i++;
	}
	return (result);
}
