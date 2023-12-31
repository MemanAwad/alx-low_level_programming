#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - will print name using function pointer
 * @name: the name
 * @f: the pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{

	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
