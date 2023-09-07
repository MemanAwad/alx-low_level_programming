#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * len - return string length
 * @s: the string
 * Return: int value of length
 */
unsigned int len(char *s)
{
	int i = 0;
	unsigned int length = 0;

	while (s[i] != '\0')
	{
		i++;
		length++;
	}
	return (length);
}
/**
 * string_nconcat - concatinate 2 string
 * @s1: first string
 * @s2: second string
 * @n: memory to be allocated
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = len(s1);
	unsigned int len2 = len(s2);
	char *str;
	unsigned int i = 0;
	unsigned int j = 0;

	str = malloc(sizeof(char) * len1 + sizeof(char) * n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	if (n >= len2)
	{
		n = len2;
	}
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	for (i = len1; i < n + len1; i++)
	{
		str[i] = s2[j];
		j++;
	}
	str[i] = '\0';
	return (str);
}
