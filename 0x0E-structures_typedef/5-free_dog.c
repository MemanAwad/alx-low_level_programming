#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print structure
 * @d: the structure
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}

