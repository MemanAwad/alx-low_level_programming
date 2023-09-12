#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - create a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *s1;
	char *s2;
	dog_t *dog;

	dog = (dog_t *)malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}
	s1 = malloc(sizeof(char) * strlen(name) + 1);
	if (s1 == NULL)
	{
		free(s1);
		free(dog);
		return (NULL);
	}
	strcpy(s1, name);
	dog->name = s1;
	dog->age = age;
	s2 = malloc(sizeof(char) * strlen(owner) + 1);
	if (s2 == NULL)
	{
		free(s1);
		free(s2);
		free(dog);
		return (NULL);
	}
	strcpy(s2, owner);
	dog->owner = s2;
	return (dog);
}

