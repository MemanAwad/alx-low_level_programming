#include "function_pointers.h"
/**
 * print_name - will print name using function pointer
 * @name: the name
 * @f: the pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	void (*ptr)(char *) = f;

	(ptr)(name);
}
