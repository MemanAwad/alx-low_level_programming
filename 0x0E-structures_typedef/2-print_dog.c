#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print structure
 * @d: the structure
 * Return: void
 */
void print_dog(struct dog *d)
{
	char *s = "(nil)";

	if (d == NULL)
	{
		return;
	}

	if ((*d).name == NULL)
	{
		printf("Name: %s\n", s);
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	if ((*d).owner == NULL)
	{
		printf("Owner: %s\n", s);
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}

}

