#include "main.h"
/**
 * len - return the length of the string
 * @s: the string
 * Return: length
 */
int len(char *s)
{
	char *str = s;

	if (*str == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + len(str + 1));
	}
}
/**
 * compare - will copare char of string
 * @str: the string
 * @low: beginning of string
 * @high: end of string
 * Return: 0 or 1
 */
int compare(char *str, int low, int high)
{
	if (*(str + low) == *(str + high))
	{
		if (low == high || low == high + 1)
		{
			return (1);
		}
		else
		{
			return (compare(str, low + 1, high - 1));
		}
	}
	else
	{
		return (0);
	}

}

/**
 * is_palindrome - will check if the string is palidrome
 * @s: the string to be printed
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		return (compare(s, 0, (len(s) - 1)));
	}
}
