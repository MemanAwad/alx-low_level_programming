#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure about dog
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 *
 * Description: it contains the dog name, age, and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
